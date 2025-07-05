// here we are going to insert a node at the end of the linked list
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node *CreateLinkedList(int arr[], int n,int index)
{
    // base case
    if (index == n)
    {
        return NULL;
    }

    node *temp = new node(arr[index]);
    temp->next = CreateLinkedList(arr, n, index + 1);
    return temp;
}


int main()
{
    node *head;
    head = NULL;
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new node(arr[i]);
        }
    }

    // now we want to print the values n the linked list
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // another method to insert the elements of an array into a linkedlist

    node *head2;
    head2 = NULL;
    node *tail2;
    tail2 = NULL;

    int arr2[] = {2, 12, 65, 78, 90};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < n2; i++)
    {
        if (head2 == NULL)
        {
            head2 = new node(arr2[i]);
            tail2 = head2;
        }
        else
        {
            tail2->next = new node(arr2[i]);
            tail2 = tail2->next;
        }
    }

    // now we want to print the values n the linked list
    node *temp2 = head2;
    while (temp2 != NULL)
    {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }
    cout<<endl;

    // use recursion to insert the elements of an array into a linkedlist
    int arr3[] = {1, 3, 5, 7, 9};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    node *head3;
    head3 = CreateLinkedList(arr3, n3, 0);

    // now we want to print the values n the linked list
    node *temp3 = head3;
    while (temp3 != NULL)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }   
    return 0;
}
