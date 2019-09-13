#include <iostream>
using namespace std;

class node
{
    public:
        char data;
        node *left,*right;

        node(char data){
            this->data = data;
            left = right = NULL;
        }
};

int search(char arr[], int strt,int end, char value){
    for(int i=strt;i<=end;i++){
        if(arr[i]==value)
            return i;
    }
}

node *buildTree(char in[],char pre[], int inStrt, int inEnd){
    static int preIndex = 0;
    if(inStrt>inEnd)
        return NULL;

    node *tNode = new node(pre[preIndex++]);
    if(inStrt==inEnd)
        return tNode;

    int inIndex = search(in,inStrt,inEnd,tNode->data);
    tNode->left = buildTree(in,pre,inStrt,inIndex-1);
    tNode->right = buildTree(in,pre,inIndex+1,inEnd);
}

void printInOrder(node *node){
    if(node == NULL)
        return;
    printInOrder(node->left);
    cout << node->data << " ";
    printInOrder(node->right);
}

int main()
{
    char in[] = {'D','B','E','A','F','C'};
    char pre[] = {'A','B','D','E','C','F'};
    int len = sizeof(in)/sizeof(in[0]);
    node *root = buildTree(in,pre,0,len-1);

    cout << "Inorder traversal of the constructed tree is : ";
    printInOrder(root);

    return 0;
}