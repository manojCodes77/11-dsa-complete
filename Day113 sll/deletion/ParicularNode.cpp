// now we are going to delete a particular node
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    // we make the data public so that we can access it directly
    int data;
    node* next;

    // parameterized constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

// insertion of the elements in the linked list
node* CreateLinkedList(int arr[],int i,int n){
    if(i==n){
        return NULL;
    }
    node* head = new node(arr[i]);
    head->next = CreateLinkedList(arr,i+1,n);
    return head;
}
int main(){
    node *head;
    head=NULL;

    // creating the linked list
    int arr[] = {1,2,3,4,5};
    head=CreateLinkedList(arr,0,5);

    // printing the linked list
    cout<<"Before deletion,Linked List is : ";
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    // now we are going to delete a particular node
    cout<<"\nEnter the position of the node you want to delete : ";
    int n;
    cin>>n;
    node *temp1 = head;
    node *pre=NULL;
    for (int i = 0; i < n-1; i++)
    {
        pre=temp1;
        temp1=temp1->next;
    }
    pre->next=temp1->next;
    delete temp1;

    // printing the linked list
    cout<<"\nAfter deletion,Linked List is : ";
    node* temp2 = head;
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }
    
    return 0;
}
