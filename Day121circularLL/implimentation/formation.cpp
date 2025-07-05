// here we are going to implement the circular linked list
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    
}
};

// formation of circular linked list
node* createLinkedList(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node* temp=new node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}
node* createCircularLinkedList(int arr[],int index,int size){
    node*temp=createLinkedList(arr,index,size);
    node* head=temp;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    return head;
}

int main(){
    int arr[]={1,2,3,4,5};

    // printing the circular linked list
    node* head=createCircularLinkedList(arr,0,5);
    node* temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    

    return 0;
}
