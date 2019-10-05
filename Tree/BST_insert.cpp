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

Node *insert(Node *node, int key){
    if(node == NULL)
        return (new Node(key));
    if(key < node ->data)
        node -> left = insert(node->left,key);
    else if(key > node->data)
        node -> right = insert(node->right,key);

    return node;
}

void inorder(Node *root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *search(Node *root,int key){
    if(root == NULL || root->data == key)
        return root;
    //key is greater than root//
    if(root->data < key)
        return search(root->right,key);
    //key is lower than root//
    return search(root->left,key);
}

Node *minValueNode(Node *node){
    Node *current = node;
    while(current && current->left != NULL)
        current = current->left;

    return current;
}

Node *deleteNode(Node *root,int key){
    if(root == NULL) 
        return root;
    if(key < root->data)
        root->left = deleteNode(root->left,key);
    else if(key > root->data)
        root->right = deleteNode(root->right,key);
    else{
        if(root->left == NULL){
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
    }
}

Node* minValue(Node *root){
    //Node *current = root;
    if(root->left == NULL) 
        return root;
    /*while (current->left != NULL){
        current = current->left;
    }
    
    return (current->data);*/
    return minValue(root->left);
}


int main()
{
    Node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80);

    cout << "BST Inorder: " << endl;
    inorder(root);
    cout << "\nSearch  70: " << endl;
    if(search(root,70))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    cout << "Delete 40:" << endl;
    deleteNode(root,40);
    inorder(root);

    cout << "\nMinimun Value: " << (minValue(root))->data << endl;
    
    return 0;
}