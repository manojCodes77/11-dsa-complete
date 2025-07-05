// now we are going to delete the last node of the linked list
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

    // deleting the last node of the linked list
    if(head==NULL){
        cout<<"Linked List is empty";
    }
    else if(head->next==NULL){
        node* temp=head;
        head=NULL;
        delete temp;
    }
    else{
        node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
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
