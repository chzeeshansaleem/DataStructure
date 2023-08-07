// Tree Data Structure:
// 1. Used to store data in a hierarchical manner. 
// 2. Example: File Explorer uses it maintain Folder & file structure in computer, DOM in HTML, comments
// 3. Can have any number of children

// Basic Terminology:
// Root - Topmost node of the tree 
// Parent - A node having successor is a parent of that node 
// Child - A node having ancestor is a child of that node 
// Sibling - nodes of same parent
// Leaf Node - Node which doesn't have any children

// Binary Tree:
// A tree where each node can have maximum two child

// Properties of Binary Tree:
// 1. Maximum nodes at level L : 2^L
// 2. Maximum nodes in a tree of height H: *2^H-1*, where H is the number of levels
// 3. For N nodes, minimum possible height or minimum number of levels are log2(N+1)
// 4. A binary tree with L leaves has at least log2(N+1)+1 number of levels

#include <iostream>

using namespace std;
 struct Node {
    struct Node* left;
    struct Node* right;
    int data;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
 };
void preorder(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inOrder(struct Node* root){
    if(root == NULL){
        return;
    }
     inOrder(root->left);
    cout<<root->data<<" ";
   
    inOrder(root->right);
}
void postOrder(struct Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
   
    
}
int Search(int inorder[], int start, int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
        return -1   ;
    }
}
Node* buildTree(int preorder[], int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if(start==end){
        return node;
    }
    int pos=Search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
     node->right=buildTree(preorder,inorder,pos+1,end);
     return node;
}

int main(){
    int preorder[] = {1,2,3,4,5};
    int inorder[]  = {4,2,1,5,3};
    // build tree
   Node* root= buildTree(preorder,inorder,0,4);
   inOrder(root);

// struct Node* root = new Node(1);
// root->left=new Node(2);
// root->right=new Node(3);
// root->left->left=new Node(4);
// root->left->right=new Node(5);
// root->right->left=new Node(6);
// root->right->right=new Node(7);
// cout<<"preorder:";
// preorder(root);
// cout<<endl;
// cout<<"inorder:";
// inOrder(root);
// cout<<endl;
// cout<<"inorder:";
// postOrder(root);
    return 0;
}
