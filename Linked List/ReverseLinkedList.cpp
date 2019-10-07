#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node* node){
    if(node == NULL)
        return;
    cout << node->data << " ";
    return printList(node->next);
}

void reverse(Node** head){
    Node* current = *head;
    Node* prev = NULL, *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int main()
{
    Node* node = NULL;
    push(&node,10);
    push(&node,5);
    push(&node,20);
    push(&node,15);
    push(&node,3);
    push(&node,50);

    cout << "Before reverse: " ;
    printList(node);
    cout << endl;

    cout << "After reverse: ";
    reverse(&node);
    printList(node);
    cout << endl;

    return 0;

}