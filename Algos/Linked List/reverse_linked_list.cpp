#include <iostream>
using namespace std;

class node{

public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtFront(node* &head, int d){

	node* n = new node(d);
	n->next = head;
	head = n;
	
}

void takeInput(node* &head){

	int d;
	cin>>d;
	while(d!=-1){
		insertAtFront(head, d);
		cin>>d;
	}
}

void print(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void reverse(node* &head){

	node* current = head;
	node* previous = NULL;
	node* n;

	while(current!=NULL){

		// store next of current in n
		n = current->next;

		// update next of current to previous
		current->next = previous;

		// update prev to current
		previous = current;

		// update current to n
		current = n;
	}
	// update head to prev
	head = previous;

}

int main(){

	node* head = NULL;
	takeInput(head);
	print(head);
	reverse(head);
	print(head);

  return 0;			
}
		