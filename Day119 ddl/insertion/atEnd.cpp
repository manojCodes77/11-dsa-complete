// insert the elements of the array in the end of the linked list.
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

// inserting the elements in the end
node*ending(int val,node*head,node*&tail){
    // linkedlist doesnot exist
    if (head==nullptr)
    {
        head=new node(val);
        tail=head;
    }
    // already exist
    else
    {
        node*temp=new node(val);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    return head;
}
// traversing
void traversing(node*head){
    node *trav=head;
    while (trav)    
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}
int main(){
    node *head=NULL;
    node *tail=NULL;
    int arr[]={1,2,3,4,5};

    int n=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        head=ending(arr[i],head,tail);
        if (i==0)
        {
            tail=head;
        }
    }

    // traversing
    traversing(head);

    return 23;
}
