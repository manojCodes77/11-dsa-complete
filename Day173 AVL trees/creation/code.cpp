// here we are going to create an AVL tree
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data, height;
    Node*left,*right;

    Node(int value)
    {
        data=value;
        height=1;
        left=right=nullptr;
    }
};

int getheight(Node* root)
{
    if(!root)return 0;

    return root->height;
}
int getbalance(Node* root)
{
    return getheight(root->left)-getheight(root->right);
}

// right rotation
Node* rightRotation(Node* root)
{
    Node*child=root->left;
    Node*childright=child->right;

    child->right=root;
    root->left=childright;
    // update height
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));
    return child;
}
// left rotation
Node* leftRotation(Node* root)
{
    Node*child=root->right;
    Node*childleft=child->left;

    child->left=root;
    root->right=childleft;
    // update height
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));
    return child;
}
Node*insert(Node* root, int key)
{
    // doesn't exist
    if(!root)
    {
       return new Node(key);
    }

    // exist
    if(key<root->data)
    root->left=insert(root->left,key);

    else if(key>root->data)
    root->right=insert(root->right,key);

    else return root;//since duplicates are not allowed

    // update height
    root->height=1+max(getheight(root->left),getheight(root->right));

    // balance check
    int balance =getbalance(root);

    // left left case
    if(balance>1 && key<root->left->data){
        return rightRotation(root);
    }

    // right right case
    else if (balance< -1 && root->right->data<key)
    {
       return leftRotation(root);
    }
    
    // left right case
    else if (balance>1 && key>root->left->data)
    {
        root->left=leftRotation(root->left);
        return rightRotation(root);
    }
    
    // right left case
    else if (balance< -1 && root->right->data > key)
    {
        root->right=rightRotation(root->right);
       return leftRotation(root);
    }
    
    // no unbalancing
    else{
        return root;
    }

    // return root;
    return root;
}

void inorder(Node* root)
{
    if(!root)return;
    inorder(root->left);

    cout<<root->data<<endl;

    inorder(root->right);
    return;
}
int main(){
    // duplicate elements not allowed
    Node* root=nullptr;

    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,70);
    root=insert(root,5);
    root=insert(root,100);
    root=insert(root,95);

    cout<<" preorder : "<<endl;
    inorder(root);
    return 0;
}
