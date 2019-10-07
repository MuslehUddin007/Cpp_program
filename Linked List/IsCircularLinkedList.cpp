#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

bool isCircular(Node* head){
    if(head == NULL)
        return true;
    Node* node = head->next;
    while(node != NULL && node != head)
        node = node->next;

    return (node == head);
}

void push(Node** head_ref,int new_data){
    Node* temp = *head_ref;
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;

    if(*head_ref != NULL){
        while(temp->next != *head_ref)
            temp = temp->next;
        temp->next = new_node;
    }
    else
        new_node->next = new_node;
    *head_ref = new_node;
}

void printList(Node* head){
    int count = 0;
    Node* temp = head;
    if(head != NULL){
        do{
            cout << temp->data << " ";
            temp = temp->next;
            count++;
        }while(temp != head);
    }
    cout << "\nTotal Node : " << count << endl;
}

//Driver Code//
int main()
{
    Node* head = NULL;
    push(&head,10);
    push(&head,30);
    push(&head,1);
    push(&head,15);
    push(&head,5);

    cout << "Contents of circular Linked List : " << endl;
    printList(head);
    cout << endl;

    cout << "Check Circular or NOT : ";
    isCircular(head) ? cout << "\nYes" : cout << "\nNo" << endl;

    return 0; 
}