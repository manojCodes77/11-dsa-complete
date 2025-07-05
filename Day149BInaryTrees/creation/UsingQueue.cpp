#include <bits/stdc++.h>
using namespace std;

// node class
class Node{
    public:
    int data;
    Node*left,*right;

    // constructor
    Node(int value){
        left=right=NULL;
        data=value;
    }

};

// function
Node*BinaryTree(){

    int x=0;
    cout<<"enter the root node:"<<endl;
    cin>>x;
    if(x==-1)return nullptr;
    Node*root=new Node(x);

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node*temp=q.front();
        q.pop();

        int first=0;
        cout<<"enter the left number " <<temp->data <<" : ";
        cin>>first;

        if(first!=-1)temp->left=new Node(first),q.push(temp->left);

        int second=0;
        cout<<"enter the right number " <<temp->data <<": ";
        cin>>second;

        if(second!=-1)temp->right=new Node(second),q.push(temp->right);
    }

    cout<<"your binary tree is created !";
    return root;
    
}
int main(){
    Node*root=BinaryTree();
    return 0;
}