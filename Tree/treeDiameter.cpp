#include <iostream>
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

/*int max(int a, int b){
    return (a>=b) ? a : b;
}*/

int height(struct Node * node){
    if(node == NULL)
        return 0;

    return 1 + max(height(node->left),height(node->right));
}

/*int diameter(struct Node *tree){
    if(tree == NULL)
        return 0;

    int lheight = height(tree->left);
    int rheight = height(tree->right);

    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);

    return max(lheight + rheight + 1, max(ldiameter,rdiameter));
}*/

int diameter1(struct Node *tree){
    if(tree == NULL)
        return 0;

    int option1 = height(tree->left) + height(tree->right);
    int option2 = diameter1(tree->left);
    int option3 = diameter1(tree->right);

    return max(option1 + 1,max(option2,option3));
}

int diameterOpt(struct Node *root, int *height){
    int lh=0,rh=0;
    int ldiameter=0,rdiameter=0;
    if(root==NULL){
        *height = 0;
        return 0;
    }
    ldiameter = diameterOpt(root->left,&lh);
    rdiameter = diameterOpt(root->right,&rh);
    *height = max(lh,rh)+1;
    return max(lh+rh+1,max(ldiameter,rdiameter));
}

int main()
{
    int height = 0;
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Diameter of given binary tree is : " << diameter1(root) << endl;
    cout << "Diameter of given binary tree is : " << diameterOpt(root,&height) << endl;

    return 0;
}

/* 
              tree
                 1      --root
              /    \       
            2       3
          /  \
        4     5
*/