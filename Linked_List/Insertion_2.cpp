// Insert and create a Linked List
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

int count(struct Node *p)
{
    if (p == NULL)
        return 0;

    return 1 + count(p->next);
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t; //for creating new node 
    int i;

    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;

    if (index == 0) //It should be inserted as a first node / brfore first node
    {
        t->next = first;
        first = t;
        
    }
    else
    {   
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}
int main()
{

    Insert(first, 0, 15);
    // Insert(first, 0, 8);
    // Insert(first, 0, 9);
    // Insert(first, 1, 10);
    Display(first);

    return 0;
}