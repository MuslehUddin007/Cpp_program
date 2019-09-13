#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *left,*right;
        Node(int data){
            this->data = data;
            left = right = NULL;
        }
};

int maxDepth(Node *node){
    if(node == NULL)
        return 0;
    else{
        int lDepth = maxDepth(node -> left);
        int rDepth = maxDepth(node -> right);

        return (lDepth>rDepth) ? (lDepth+1) : (rDepth+1);  
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Height of tree is : " << maxDepth(root) << endl;
    return 0;
}