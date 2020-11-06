// Display a Linked List
#include <bits/stdc++.h>
using namespace std;

class Node
{  public:
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n)
{
     Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t =new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

//Simple Linear Search
Node *Search(Node *p,int key){
    while(p!=NULL){
        if(p->data==key)
        return p;

        p=p->next;
    }
    return NULL; //If not found

}
 //Improved Linear Search
 Node *LSearch( Node *p, int key)
{
     Node *q;

    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p; //q pointer will follow p pointer
        p = p->next;
    }
    return NULL;
}
//Recrusively
 Node *RSearch( Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return RSearch(p->next, key);
}

int main()
{
     Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    temp =Search(first, 8);
    cout<<temp->data;

    return 0;
}