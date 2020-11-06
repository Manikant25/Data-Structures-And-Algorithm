#include<bits/stdc++.h>

struct Node //Structure for node
{
    int data;
    struct Node *next; //self referiential Structure
} *first = NULL;       //Global pointer

//Function for Creating Linked List
void create(int A[], int n)
{
    int i;
    struct Node *t, *last; //temporray pointer, this will help creating a new node and last pointer will point to last node, help to add a new node at the end of the linked list
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0]; //first element
    first->next = NULL;
    last = first; //last point on first node

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t; //Last node should point on t, last 's next should be t
        last = t;       //Last should move on new node t
    }
}

//Displaying Linked List
void Display(struct Node *p) //First pointer  becomes pointer p
{
    int count = 0;
    while (p != NULL) //Then p will scan through entire linked list
    {
        printf("%d ", p->data);
        p = p->next;
        count++;
    }
    printf("Count is %d", &count);
}

//Displaying Recrusively
void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        printf("%d ", p->data);
    }
}

//Function for counting number of nodes
int count(struct Node *p)
{
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next; //This help us to traverse the linked list
    }

    return c;
}

//Fuction for sum of elements in the node
int add(struct Node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }

    return sum;
}

//Fuction for sum of elements in the node Recrusively
int Radd(struct Node *p)
{
    if (p == 0)
        return 0;
    else
    {
        return Radd(p->next) + p->data;
    }
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);

    //  RDisplay(first);
    //  printf("\n");
    Display(first);

    return 0;
}