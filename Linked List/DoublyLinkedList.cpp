#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next,*prev;
};

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;

    if(*head_ref != NULL)
        (*head_ref)->prev = new_node;
    *head_ref = new_node;
}

void insertAfter(Node* prev_node, int new_data){
    if(prev_node == NULL){
        cout << "The given previous node can't be NULL" << endl;
        return;
    }

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if(new_node->next != NULL)
        new_node->next->prev = new_node;
}

void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    
    if(*head_ref == NULL){
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
    return;
}

void DeleteNode(Node** head_ref, Node* del){
    if(*head_ref == NULL || del == NULL)
        return;
    if(*head_ref == del)
        *head_ref == del->next;
    if(del->next != NULL)
        del->next->prev = del->prev;

    if(del->prev != NULL)
        del->prev->next = del->next;
    free(del);
    return;
}

void printList(Node* node){
    Node* last;
    cout << "\nTraversal is forward direction" << endl;
    while(node != NULL){
        cout << " " << node->data << " ";
        last = node;
        node = node->next;
    }

    cout << "\nTraversal in reverse direction" << endl;
    while(last != NULL){
        cout << " " << last->data << " ";
        last = last->prev;
    }
}

//Driver Code//
int main()
{
    Node* head = NULL;
    append(&head,6);
    push(&head,7);
    push(&head,1);
    append(&head,4);
    insertAfter(head->next,8);
    cout << "Created DLL is : ";
    printList(head);

    cout << "\nModified DLL is : ";
    DeleteNode(&head,head->next);
    printList(head);
    return 0;
}