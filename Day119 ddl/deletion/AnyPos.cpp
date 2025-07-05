// delete a node at any position
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

// insertion
node *createDLL(int arr[], int index, int size, node *back)
{
    // base case
    if (index == size)
        return NULL;

    // process
    node *temp = new node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index + 1, size, temp);

    return temp;
}

// deletion at any position
node *deletion(node *head, int pos)
{
    if (head == NULL)
        return nullptr;
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return head;
    }
    else
    {
        if (pos == 1)
        {
            node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }

        else
        {
            node *curr = head;
            while (--pos)
            {
                curr = curr->next;
            }

            // delete at end
            if (curr->next== NULL)
            {
                curr->prev->next = NULL;
                delete curr;
            }
            else
            {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
            }
        }
        return head;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *back = NULL;
    node *head = createDLL(arr, 0, size, back);

    // traversing
    cout << "before deletion: ";
    node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;

    int pos = 3;
    cout << "after deletion: ";
    trav = deletion(head, pos);
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    return 0;
}
