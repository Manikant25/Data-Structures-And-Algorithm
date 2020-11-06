#include <bits/stdc++.h>  
using namespace std;

class Node
{
public:
    int data;
     Node *next;
};

Node *search(Node *p,int key){
    while(p!=NULL){
        if(key==p->data)
        return p;

        p=p->next;
    }
    return NULL; //if not found
}

void display(Node *p)
{
    if(p != NULL)
    {
        cout << p->data << " ";
        display(p->next);
    }
}

int count(Node *p)
{
    if(p == NULL)
        return 0;

    return 1 + count(p->next);
}

Node *create_list(Node *head, int n, int arr[])
{
    Node *newnode, *temp; //temp will used to add more nodes 
    temp = head;

    for (int i = 0; i < n; i++)
    {
        newnode = new Node;
        //Checking if memory is avaivle
        if (!newnode)
        {
            cout << "Memory Error\n";
            return head;
        }

        newnode->data = arr[i];
        newnode->next=NULL;
        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Node *head = NULL;
    head = create_list(head, n, arr);

    // display(head);
    // cout << endl;
    // cout << "Number of nodes =" << count(head);
Node *temp;
temp=search(head,5);
cout<<temp->data;
    return 0;
}
