#include <iostream>
using namespace std;

// A B-tree node
class BTreeNode {
    int *keys;      // An array of keys
    int t;          // Minimum degree (defines the range for number of keys)
    BTreeNode **C;  // An array of child pointers
    int n;          // Current number of keys
    bool leaf;      // True if leaf node

public:
    BTreeNode(int _t, bool _leaf);  // Constructor

    // A utility function to traverse all nodes in a subtree rooted with this node
    void traverse();

    // A utility function to search a key in the subtree rooted with this node
    BTreeNode *search(int k);  // returns NULL if the key is not present

    // A utility function to insert a new key in the subtree rooted with this node
    void insertNonFull(int k);

    // A utility function to split the child y of this node. i is the index of y in child array C[]
    void splitChild(int i, BTreeNode *y);

    // Make BTree a friend class so that it can access private members of BTreeNode
    friend class BTree;
};

// A B-tree class
class BTree {
    BTreeNode *root;  // Pointer to root node
    int t;            // Minimum degree
public:
    // Constructor (Initializes tree as empty)
    BTree(int _t) {
        root = nullptr;
        t = _t;
    }

    // Function to traverse the tree
    void traverse() {
        if (root != nullptr) root->traverse();
    }

    // Function to search a key in this tree
    BTreeNode* search(int k) {
        return (root == nullptr) ? nullptr : root->search(k);
    }

    // The main function that inserts a new key in this B-tree
    void insert(int k);
};

// Constructor for BTreeNode class
BTreeNode::BTreeNode(int t1, bool leaf1) {
    t = t1;
    leaf = leaf1;

    // Allocate memory for maximum number of possible keys and child pointers
    keys = new int[2 * t - 1];
    C = new BTreeNode *[2 * t];

    // Initialize the number of keys as 0
    n = 0;
}

// Function to traverse all nodes in a subtree rooted with this node
void BTreeNode::traverse() {
    // There are n keys and n+1 children, traverse through n keys and first n children
    int i;
    for (i = 0; i < n; i++) {
        // If this is not a leaf, before printing key[i], traverse the subtree rooted with child C[i]
        if (!leaf)
            C[i]->traverse();
        cout << " " << keys[i];
    }

    // Print the subtree rooted with last child
    if (!leaf)
        C[i]->traverse();
}

// Function to search key k in subtree rooted with this node
BTreeNode* BTreeNode::search(int k) {
    // Find the first key greater than or equal to k
    int i = 0;
    while (i < n && k > keys[i])
        i++;

    // If the found key is equal to k, return this node
    if (keys[i] == k)
        return this;

    // If the key is not found here and this is a leaf node
    if (leaf)
        return nullptr;

    // Go to the appropriate child
    return C[i]->search(k);
}

// Function to insert a new key in the tree
void BTree::insert(int k) {
    // If tree is empty
    if (root == nullptr) {
        // Allocate memory for root
        root = new BTreeNode(t, true);
        root->keys[0] = k;  // Insert key
        root->n = 1;        // Update number of keys in root
    } else {
        // If the root node is full, then the tree grows in height
        if (root->n == 2 * t - 1) {
            BTreeNode *s = new BTreeNode(t, false);

            // Make old root as child of new root
            s->C[0] = root;

            // Split the old root and move a key to the new root
            s->splitChild(0, root);

            // New root has two children now. Decide which of the two children will have the new key
            int i = (s->keys[0] < k) ? 1 : 0;
            s->C[i]->insertNonFull(k);

            // Change root
            root = s;
        } else {
            // If root is not full, call insertNonFull for root
            root->insertNonFull(k);
        }
    }
}

// A utility function to insert a new key in this node. The node must be non-full when this function is called
void BTreeNode::insertNonFull(int k) {
    int i = n - 1;

    // If this is a leaf node
    if (leaf) {
        // Find the location of the new key to be inserted and move all greater keys one place ahead
        while (i >= 0 && keys[i] > k) {
            keys[i + 1] = keys[i];
            i--;
        }

        // Insert the new key at the found location
        keys[i + 1] = k;
        n = n + 1;
    } else {
        // Find the child that is going to have the new key
        while (i >= 0 && keys[i] > k)
            i--;

        // Check if the found child is full
        if (C[i + 1]->n == 2 * t - 1) {
            // Split the child
            splitChild(i + 1, C[i + 1]);

            // After splitting, the middle key of C[i+1] goes up and C[i+1] is split into two
            if (keys[i + 1] < k)
                i++;
        }
        C[i + 1]->insertNonFull(k);
    }
}

// A utility function to split the child y of this node. i is the index of y in the child array C[]
void BTreeNode::splitChild(int i, BTreeNode *y) {
    // Create a new node to store (t-1) keys of y
    BTreeNode *z = new BTreeNode(y->t, y->leaf);
    z->n = t - 1;

    // Copy the last (t-1) keys of y to z
    for (int j = 0; j < t - 1; j++)
        z->keys[j] = y->keys[j + t];

    // Copy the last t children of y to z
    if (!y->leaf) {
        for (int j = 0; j < t; j++)
            z->C[j] = y->C[j + t];
    }

    // Reduce the number of keys in y
    y->n = t - 1;

    // Shift the child array of this node to make space for the new child
    for (int j = n; j >= i + 1; j--)
        C[j + 1] = C[j];

    // Link the new child to this node
    C[i + 1] = z;

    // Shift the keys of this node to make space for the new key
    for (int j = n - 1; j >= i; j--)
        keys[j + 1] = keys[j];

    // Copy the middle key of y to this node
    keys[i] = y->keys[t - 1];

    // Increment count of keys in this node
    n = n + 1;
}

int main() {
    BTree t(3);  // A B-Tree with minimum degree 3

    t.insert(10);
    t.insert(20);
    t.insert(5);
    t.insert(6);
    t.insert(12);
    t.insert(30);
    t.insert(7);
    t.insert(17);

    cout << "Traversal of the constructed B-tree is:\n";
    t.traverse();

    int k = 6;
    (t.search(k) != nullptr) ? cout << "\nPresent" : cout << "\nNot Present";

    k = 15;
    (t.search(k) != nullptr) ? cout << "\nPresent" : cout << "\nNot Present";

    return 0;
}
