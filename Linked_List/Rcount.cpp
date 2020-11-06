// Recursive C program to find length or count of nodes in a linked list 
#include<bits/stdc++.h>
using namespace std;
/* Link list node */
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

/* Given a reference (pointer to pointer) to the head 
of a list and an int, push a new node on the front 
of the list. */
void push(struct Node** head_ref, int new_data) 
{ 
	/* allocate node */
	struct Node* new_node = new Node;
	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

/* Counts the no. of occurrences of a node 
(search_for) in a linked list (head)*/
int getCount(struct Node* head) 
{ 
	// Base case 
	if (head == NULL) 
		return 0; 

	// count is 1 + count of remaining list 
	return 1 + getCount(head->next); 
} 

//
void Rdiplay(struct Node *p ){
    if(p!=NULL){
        cout<<p->data<<" ";
        Rdiplay(p->next);
    }
}

/* Driver program to test count function*/
int main() 
{ 
	/* Start with the empty list */
	struct Node* head = NULL; 

	/* Use push() to construct below list 
	1->2->1->3->1 */
	push(&head, 1);
	push(&head, 3); 
	push(&head, 1); 
	push(&head, 2); 
	push(&head, 1); 

	/* Check the count function */
	printf("count of nodes is %d", getCount(head)); 
    cout<<endl;
    Rdiplay(head);
	return 0; 
} 
