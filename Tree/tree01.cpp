#include <iostream>
#include <conio.h>
using namespace std;


struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void printPostOrder(struct Node* node){
    if(node == NULL)
        return;
    
    printPostOrder(node -> left);
    printPostOrder(node -> right);
    cout << node -> data << " ";
}

void printInOrder(struct Node* node){
    if(node == NULL)
        return;

    printInOrder(node->left);
    cout << node -> data << " ";
    printInOrder(node->right);
}

void printPreOrder(struct Node* node){
    if(node == NULL)
        return;

    cout << node->data << " ";
    printPreOrder(node->left);
    printPreOrder(node->right);
}

//Driver Code//
int main()
{
    struct  Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\nPreOrder traversal of binary tree is \n";
    printPreOrder(root);

    cout << "\nInOrder traversal of binary tree is \n";
    printInOrder(root);

    cout << "\nPostOrder traversal of binary tree is \n";
    printPostOrder(root);

    return 0;
}