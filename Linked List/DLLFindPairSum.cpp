#include <iostream>
using namespace std;

class Node{
      public:
	      int data;
	      Node *next,*prev;
};

void pairSum(Node *head,int x)
{
	Node *first = head;
	Node *second = head;
	while(second->next != NULL)
		second = second->next;
	bool found = false;

	while(first != NULL && second != NULL && first != second && second->next != first){
		if((first->data + second->data) == x){
			found = true;
			cout << "(" <<first->data<<", "<<second->data <<")" << endl;
			first = first->next;
			second = second->prev;
		}
		else{
			if((first->data + second->data) < x)
				first = first->next;
			else
				second = second->prev;
		}
	}
	if(found == false)
		cout << "No pair found" << endl;
}

void push(Node** head, int new_data){
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = new_node->prev = NULL;
	if(!(*head))
		(*head) = new_node;
	else{
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
}

//Driver program//
int main()
{
	Node *head = NULL;
        push(&head,9);
	push(&head,8);
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,2);
	push(&head,1);
	int x = 7;
	pairSum(head,x);
	return 0;
}
