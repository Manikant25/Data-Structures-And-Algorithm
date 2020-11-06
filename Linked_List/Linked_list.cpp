// A simple CPP program to introduce 
// a linked list 
#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 


// This function prints contents of linked list 
// starting from the given node 
void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
}  

//This function cunts number of nodes
void count(Node *p){
	int c=0;
	while(p!=NULL){
      p=p->next;
	  c++;
	}
cout<<"Number of node equal to :"<<c<<endl;
}

//Recursively
int getCount(Node* head) 
{ 
    // Base case 
    if (head == NULL) 
        return 0; 
  
    // count is 1 + count of remaining list 
    return 1 + getCount(head->next); 
} 


// Program to create a simple linked 
// list with 3 nodes 
int main() 
{ 
	Node* head = NULL; 
	Node* second = NULL; 
	Node* third = NULL; 

	// allocate 3 nodes in the heap 
	head = new Node(); 
	second = new Node(); 
	third = new Node(); 

	/* Three blocks have been allocated dynamically. 
	We have pointers to these three blocks as head, 
	second and third	 
	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+-----+	 +----+----+	 +----+----+ 
	| # | # |	 | # | # |	 | # | # | 
	+---+-----+	 +----+----+	 +----+----+ 
	
# represents any random value. 
Data is random because we haven’t assigned 
anything yet */

	head->data = 1; // assign data in first node 
	head->next = second; // Link first node with 
	// the second node 

	/* data has been assigned to the data part of first 
	block (block pointed by the head). And next 
	pointer of the first block points to second. 
	So they both are linked. 

	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+---+	 +----+----+	 +-----+----+ 
	| 1 | o----->| # | # |	 | # | # | 
	+---+---+	 +----+----+	 +-----+----+	 
*/

	// assign data to second node 
	second->data = 2; 

	// Link second node with the third node 
	second->next = third; 

	/* data has been assigned to the data part of the second 
	block (block pointed by second). And next 
	pointer of the second block points to the third 
	block. So all three blocks are linked. 
	
	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+---+	 +---+---+	 +----+----+ 
	| 1 | o----->| 2 | o-----> | # | # | 
	+---+---+	 +---+---+	 +----+----+	 */

	third->data = 3; // assign data to third node 
	third->next = NULL; 

	/* data has been assigned to the data part of the third 
	block (block pointed by third). And next pointer 
	of the third block is made NULL to indicate 
	that the linked list is terminated here. 

	We have the linked list ready. 

		head	 
			| 
			| 
		+---+---+	 +---+---+	 +----+------+ 
		| 1 | o----->| 2 | o-----> | 3 | NULL | 
		+---+---+	 +---+---+	 +----+------+	 
	
	
	Note that only the head is sufficient to represent 
	the whole list. We can traverse the complete 
	list by following the next pointers. */

// 	 Node *p=head;

//   while(p!=0)
//   {
//       cout<<p->data<<" ";
//       p=p->next;
//   }
// printList(head);
// cout<<endl;
// count(head);
// cout<<endl;

cout<<getCount(head);

	return 0; 
} 


