// here we are going to delete the first node of the linked list
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

// inserting the elements in the linked list
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
    int arr[] = {1,2,3,4,5};

    head=CreateLinkedList(arr,0,5);

    // printing the linked list
    cout<<"Before deletion,Linked List is : ";
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    // deleting the first node of the linked list
    if(head==NULL){
        cout<<"Linked List is empty";
    }
    else{
        node* todelete = head;
        head = head->next;
        delete todelete;
    }

    cout<<endl;

    // printing the linked list
    cout<<"After deletion,Linked List is : ";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
