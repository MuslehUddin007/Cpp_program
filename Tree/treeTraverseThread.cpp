#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left,*right;
    bool rightThread;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

struct Node *leftmost(struct Node *n){
    if(n==NULL)
        return NULL;

    while(n->left != NULL)
        n = n->left;

    return n;
}

void inOrder(struct Node *root){
    struct Node *cur = leftmost(root);
    while(cur != NULL){
        cout << cur->data << " ";
        if(cur->rightThread)
            cur = cur->right;
        else
            cur = leftmost(cur->right);
        
    }
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "Tree element : " ;
    inOrder(root);

    return 0;
}