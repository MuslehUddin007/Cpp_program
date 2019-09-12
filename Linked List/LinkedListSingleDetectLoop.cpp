#include <iostream>
#include <unordered_set>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

//loop detect//
bool detectLoop(Node* head){
    unordered_set<Node*> s;

    while(head != NULL){
        if(s.find(head) != s.end()){
            cout << " Head : " << head->data;
            return true;
        }

        s.insert(head);
        head = head -> next;
    }
    return false;
}

void printList(Node* node){
    if(node == NULL)
        return;
    cout << " " << node -> data;
    return printList(node -> next);
}

int main()
{
    Node *head = NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);

    printList(head);

    head -> next -> next -> next -> next = head;

    if(detectLoop(head))
        cout << "\nLoop Found" << endl;
    else
        cout << "\nNo Loop" << endl;

    return 0;
}
