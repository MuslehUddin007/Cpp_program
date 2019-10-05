#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left,*right;
        Node(int data){
            this->data = data;
            left = right = NULL;
        }
};

bool printAncestros(Node *root,int key){
    if(root == NULL)
        return false;
    if(root->data == key)
        return true;
    if(printAncestros(root->left,key) || printAncestros(root->right,key)){
        cout << root->data << " ";
        return true;
    }
    return false;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(4);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);

    cout << "Ancestors : " << endl;
    printAncestros(root,7);
    return 0;
}