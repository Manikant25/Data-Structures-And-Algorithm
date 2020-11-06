// Checking is a Linked List is Sorted
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
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
bool isSorted(struct Node *p)
{
    int x = -65536; //Smallest value

    while (p != NULL)  //checking for false condition 
    {
        if (p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}
int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    cout << boolalpha << isSorted(first);

    return 0;
}