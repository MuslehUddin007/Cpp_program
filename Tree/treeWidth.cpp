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

int maxDepth(Node *root){
    if(root == NULL)
        return 0;
    else{
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);

        return (lDepth>rDepth) ? (lDepth+1) : (rDepth+1);
    }
}

int getWidth(Node *root,int level){
    if(root == NULL)
        return 0;
    if(level == 1)
        return 1;
    else if(level>1)
        return getWidth(root->left,level-1) + getWidth(root->right,level-1);
}

int getMaxWidth(Node *root){
    int maxWidth = 0;
    int Width;
    int h = maxDepth(root);
    
    for(int i=1;i<=h;i++){
        Width = getWidth(root,i);
        if(Width>maxWidth)
            maxWidth = Width;
    }
    return maxWidth;
}


int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(8);  
    root->right->right->left = new Node(6);  
    root->right->right->right = new Node(7);

    cout << "Max Widht : " << getMaxWidth(root);
    return 0;

    return 0;
}