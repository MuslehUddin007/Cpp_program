#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void FrontBackSplit(Node* source,Node** frontRef,Node** backRef){
    Node *fast,*slow;
    slow = source;
    fast = source->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
    }

    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}

Node* SortedMerge(Node* a,Node* b){
    Node* result = NULL;
    if(a == NULL)
        return b;
    else if(b == NULL)
        return a;
    
    if(a->data <= b->data){
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else{
        result = b;
        result->next = SortedMerge(a,b->next);
    }
    return result;
}

//sorts the linked list by changing next pointers(not data)//
void MergeSort(Node** headRef){
    Node* head = *headRef;
    Node* a;
    Node* b;

    if((head==NULL) || (head->next == NULL))
        return;

    //split head into a and b sublists//
    FrontBackSplit(head,&a,&b);

    //recursively sort the sublists//
    MergeSort(&a);
    MergeSort(&b);
    cout << "A: " << a->data << "  B: " << b->data << endl;

    //ans = merge the two sorted lists together//
    *headRef = SortedMerge(a,b);
}

//add new data//
void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//print linked list//
void printList(Node* node){
    if(node == NULL)
        return;
    cout << node->data << " ";
    return printList(node->next);
}

//Driver code//
int main()
{
    Node* res = NULL;
    Node* a = NULL;

    push(&a,15);
    push(&a,10);
    push(&a,5);
    push(&a,20);
    push(&a,3);
    push(&a,2);

    cout << "Before Sorted Linked List is: \n";
    printList(a);
    cout << endl;

    MergeSort(&a);
    cout << "Sorted Linked List is: \n";
    printList(a);

    return 0;
}
