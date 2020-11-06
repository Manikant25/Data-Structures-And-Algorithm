#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    struct Node *next;
} *first=NULL;

int count(Node *p)
{
    if (p == NULL)
        return 0;

    return 1 + count(p->next);
}

void create(int A[], int n)
{
    int i;
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void Insert(Node *p, int index, int x)
{
    Node *t;

    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;

    if (index == 0) //For inseting before head node
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
     
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
   Display(first);
   cout<<"After Insertion\n";
    Insert(first, 3, 5);
    Display(first);
    return 0;
}