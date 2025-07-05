// inserting the elements in the start
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;

    node(int val){
        data=val;
        next=prev=NULL;

    }
};

node*starting(int val,node*head){
    // linkedlist doesnot exist
    if (head==nullptr)
    {
        head=new node(val);
    }
    // already exist
    else
    {
        node*temp=new node(val);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
int main(){
    node *head=NULL;
    int arr[]={1,2,3,4,5};

    int n=sizeof(arr)/sizeof(arr[0]);
    
    for (int i = n-1; i >=0; i--)
    {
        head=starting(arr[i],head);
    }
    
    // traversing
    node *trav=head;
    while (trav)    
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    
    return 0;
}
