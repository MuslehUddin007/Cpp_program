#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next,*prev;
};

void reverse(Node** head_ref){
    Node* temp = NULL;
    Node* current = *head_ref;

    while(current != NULL){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if(temp != NULL)
        *head_ref = temp->prev;
}

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = *head_ref;

    if((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

void printList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}


//Driver Code//
int main()
{
    Node* head = NULL;
    push(&head,2);
    push(&head,4);
    push(&head,6);
    push(&head,8);

    cout << "Original Linked List : " << endl;
    printList(head);
    cout << endl;

    cout << "Reverse Linked List : " << endl;
    reverse(&head);
    printList(head);
    cout << endl;

    return 0;
}