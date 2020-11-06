// Deletion Linked List
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

int count(Node *p)
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
void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        printf("%d ", p->data);
    }
}

int  Delete(Node *p,int index){
    Node *q=NULL;
    int x;
    if(index<0 || index > count(p))
    return -1;

    if(index==1)
    {
        q=p;
        x=first->data;
        first=first->next;
        delete q;
    }
    else
    {
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
       q->next=p->next;
       x=p->data;
       delete q;
      return x;
    }
    


}
int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    Delete(first, 2);
    Display(first);

    return 0;
}