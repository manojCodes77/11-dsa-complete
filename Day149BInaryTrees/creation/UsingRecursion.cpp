// created a binary tree using recursion 
// first, we are going to create left part, then right part
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
Node * BinaryTree(){
    int x=0;
    cin>>x;

    // base case
    if(x==-1)return NULL;

    // process
    Node*temp=new Node(x);

    // left side creation
    cout<<"enter the left child of "<<x<<endl;
    temp->left=BinaryTree();

    // right side creation
    cout<<"enter the right child of "<<x<<endl;
    temp->right=BinaryTree();

    return temp;
}

int main(){
    
    cout<<"enter the root node:";
    Node*root=BinaryTree();

    cout<<"your binary tree is created !";
    
    return 0;
}
