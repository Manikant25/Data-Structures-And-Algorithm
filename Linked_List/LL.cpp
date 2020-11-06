#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
//newnode will act like head
Node *newnode, *l, *t;

int sum(Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int Rsum(Node *h)
{ 
    if (h == 0)
        return 0;
    else
    {
        return Rsum(h->next) + h->data;
    }
}

void create(int arr[], int n)
{

    newnode = new Node;
    newnode->data = arr[0];
    newnode->next = NULL;
    l = newnode;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        l->next = t;
        l = t;
    }
}

void diplay(Node *h)
{
    if (h != NULL)
    {
        cout << h->data << " ";
        diplay(h->next);
    }
}

int getcount(Node *h)
{
    if (h == NULL)
        return 0;

    return 1 + getcount(h->next);
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    create(arr, n);

    diplay(newnode);
    int x;
    // x = getcount(newnode);
    // cout << "Number of nodes is " << x;
    // cout << endl<< sum(newnode)<<endl;
    cout<<Rsum(newnode);

    return 0;
}