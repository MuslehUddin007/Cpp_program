#include <iostream>
#include <conio.h>
using namespace std;

//Node//
class Node
{
    public:
        int data;
        Node *next;
};

//insert new node on the front//
void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

//insert after given node//
void insertAfter(Node* prev_node, int new_data){
    if(prev_node == NULL){
        cout << "The given previous node can't be NULL" << endl;
        return;
    }

    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
}

//append a new node at the end//
void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node -> data = new_data;
    new_node -> next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while(last -> next != NULL)
        last = last -> next;

    last -> next = new_node;
    return;
}

//delete node//
void deleteNode(Node** head_ref, int key){
    Node* temp = *head_ref,*prev;

    if(temp != NULL && temp -> data == key){
        *head_ref = temp -> next;
        free(temp);
        return;
    }

    while(temp != NULL && temp -> data != key){
        prev = temp;
        temp = temp -> next;
    }

    if(temp == NULL) return;

    prev -> next = temp -> next;
    free(temp);
}

//print the linked list//
int printList(Node *node){
    int count = 0;
    while(node != NULL){
        count++;
        cout << " " << node -> data;
        node = node -> next;
    }
    return count;
}

//count Linked List//
int getCount(Node* head){
    if(head == NULL)
        return 0;
    return 1 + getCount(head->next);
}

//search element//
bool search(Node* head,int key){
    if(head == NULL)
        return false;
    if(head -> data == key)
        return true;
    return search(head -> next , key);
}

//delete node//
void DeleteNode(Node** head_ref, int key){
    Node *temp = *head_ref,*prev;
    if(temp != NULL && temp->data == key){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}

//Driver code//
int main()
{
    Node* head = NULL;
    append(&head,6);
    push(&head,7);
    push(&head,1);
    push(&head,10);
    append(&head,4);
    insertAfter(head->next,8);
    deleteNode(&head,6);

    cout << "Created Linked List is : ";
    int count = printList(head);
    int count1 = getCount(head);

    cout << "\nCount 01: " << count << endl;
    cout << "\nCount 02: " << count1 << endl;

    bool result = search(head,9);
    cout << "\nSearch 10 : " << result;
    cout << endl;

    cout << "After Delete 1: ";
    DeleteNode(&head,1);
    printList(head);

    return 0;
}
