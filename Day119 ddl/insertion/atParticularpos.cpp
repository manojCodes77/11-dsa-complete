// insert an element at a particular position in a doubly linked list
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
// insert the elements of the array using recursion
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

// inserting the elements at a particular position
node *particular(int val, node *head, int pos)
{
    // linkedlist doesnot exist
    if (head == nullptr)
    {
        head = new node(val);
    }
    // insert at the start
    else if (pos == 0)
    {
        node *temp = new node(val);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    // insert at the end
    else if (pos == -1)
    {
        node *temp = new node(val);
        node *trav = head;
        while (trav->next != NULL)
        {
            trav = trav->next;
        }
        trav->next = temp;
        temp->prev = trav;
    }
    // already exist
    else
    {
        node *temp = new node(val);
        node *trav = head;
        while (--pos)
        {
            trav = trav->next;
        }
        if (trav->next != NULL)
        {
            temp->next = trav->next;
            trav->next->prev = temp;
            trav->next = temp;
            temp->prev = trav;
        }
        else
        {
            trav->next=temp;
            temp->prev=trav;
        }
    }
    return head;
}

int main()
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *back = NULL;
    head = createDLL(arr, 0, size, back);

    // traversing
    cout << "before inserting at a particular position: ";
    node *trav = head;

    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;

    // inserting at a particular position
    head = particular(6, head, -1);

    // traversing
    cout << "after inserting at a particular position: ";
    trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}
