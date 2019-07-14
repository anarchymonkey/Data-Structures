#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct BinaryTreeNode{
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
};

struct Node *root = NULL;
struct BinaryTreeNode *head = NULL;

Node *create(int data){

    struct Node *temp = new struct Node;
    temp->data = data;
    temp->next = NULL;

return temp;
}

BinaryTreeNode *createTree(int data){
    struct BinaryTreeNode *temp = new struct BinaryTreeNode;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


void push(int data){

    struct Node *newNode = create(data);
    struct Node *t;
    if(root == NULL){
        cout<<"root is NULL"<<endl;
        newNode->next = NULL;
        root = newNode;
    }else{
            t = root;

            while(t -> next != NULL){
                t = t->next;
            }
            t->next = newNode;

        cout<<"created a node"<<endl;
    }
        }

void convertListToBTree(){
    queue<BinaryTreeNode *> storeNodes;

    if(root == NULL){
        head = NULL;
        return ;
    }

    head = createTree(root->data);
    storeNodes.push(head);
    cout<<"front is "<<endl;
    root = root->next;

    while(root){
        BinaryTreeNode *parent = storeNodes.front();
        storeNodes.pop();

        struct  BinaryTreeNode *leftChild = NULL;
        struct BinaryTreeNode *rightChild = NULL;

        leftChild = createTree(root->data);
        storeNodes.push(leftChild);
        root = root->next;

        if(root){
            rightChild = createTree(root->data);
            storeNodes.push(rightChild);
            root = root->next;
        }
        
        parent->left = leftChild;
        parent->right = rightChild;
    }
}

void inorderTraversal(struct BinaryTreeNode *temp) 
{ 
    if (temp) {

        inorderTraversal( temp->left ); 
        cout << temp->data << " "; 
        inorderTraversal( temp->right ); 
    } 
} 


void print(struct Node *root){

        cout<<"printing the nodes"<<endl;
        while(root != NULL){
            cout<<root->data<<"->";
            root = root->next;
        }
}
    int main(){

        int keypress;
        int data;
        cout<<"Enter the key"<<endl;
        cin>>keypress;
        while(keypress != 0){
            cout<<"Enter the data"<<endl;
            cin>>data;
            push(data);
            cout<<"Enter the key"<<endl;
            cin>>keypress;

        }
        convertListToBTree();
        inorderTraversal(head);
        print(root);
}
