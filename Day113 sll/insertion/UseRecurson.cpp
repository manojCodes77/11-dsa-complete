// use the concept of recursion to delete a particular node from the linked list
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};

// function to create a linked list
// we are using recursion to create a linked list
node *CreateLinkedList(int arr[], int n, int index)
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

int main(){
    node *head;
    head=NULL;

    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    head=CreateLinkedList(arr,n,0);

    // now we want to print the values n the linked list
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    // now we want to delete a particular node using recursion
    return 0;
}
