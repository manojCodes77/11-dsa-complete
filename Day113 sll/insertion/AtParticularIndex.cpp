// now we are going to insert a node at a particular index in the linked list
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

    // now we want to insert a node at a particular index
    int insertIndex=3;
    int insertValue=5;

    node *temp1=head;
    insertIndex--;
    while (insertIndex--)
    {
        temp1=temp1->next;
    }
    node *temp2=new node(insertValue);
    temp2->next=temp1->next;
    temp1->next=temp2;

    cout<<endl;
    // now we want to print the values n the linked list
    node *temp3=head;
    while (temp3!=NULL)
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
    return 0;
}
// solve this question using recursion--homework
