#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
void flatten(Node* root) {
    if(!root)return;
    
    if(root->left && root->right){
        Node*temp=root->left;
        while(temp->right){
            temp=temp->right;
        }
        temp->right=root->right;
        root->right=nullptr;
    }
    if(!root->left && root->right){
        root->left=root->right;
        root->right=nullptr;
    }
    flatten(root->left);
    return;
}
void rightshift(Node*root){
    Node*temp=root;
    while(temp){
        temp->right=temp->left;
        temp->left=nullptr;
        temp=temp->right;
    }
    return;
}
void inorder(Node*root){
    if(!root)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
    root->right->left=new Node(7);
    root->right->left->right=new Node(8);
    flatten(root);
    rightshift(root);
    cout << "The Inorder traversal after flattening binary tree ";
    inorder(root);
    return 0;
}