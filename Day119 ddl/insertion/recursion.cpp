// create a linked list using recursion
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

// insertion
node*createDLL(int arr[], int index,int size,node*back){
    // base case
    if(index==size)return NULL;

    // process
    node*temp=new node(arr[index]);
    temp->prev=back;
    temp->next=createDLL(arr,index+1,size,temp);

    return temp;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    node*back=NULL;
    node*head=createDLL(arr,0,size,back)
    ;

    // traversing
    node *trav=head;
    while (trav)    
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }

    return 0;
}
