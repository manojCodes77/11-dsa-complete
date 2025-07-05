// here we are going to create a linked list and insert a node at starting
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // constructor
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    // created in static way
    node A1(4);
    cout << A1.data << endl;
    cout << A1.next << endl;
    cout << endl;

    // create in dynamic way
    node *A2;
    A2 = new node(4);

    cout << A2->data << endl;
    cout << A2->next << endl;

    // insert the elements of an array into a linkedlist
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    node *head;
    head=NULL;

    for (int i = 0; i < n; i++)
    {
        // linked list doesnot exist initially
        if (head == NULL)
            head = new node(arr[i]);

        //  linked list exist initially
        else
        {
            node *temp;
            temp = new node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }

    // now we want to print the values n the linked list
    node *temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

    

    return 0;
}
