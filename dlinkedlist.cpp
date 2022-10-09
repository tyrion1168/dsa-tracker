#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;

void createList(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        struct Node *newnode, *temp;
        newnode = new Node();
        newnode->data = arr[i];
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            newnode->prev = temp;
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtFirst(int x)
{
    struct Node *newnode;
    newnode = new Node();
    newnode->data = x;
    newnode->next = newnode->prev = 0;
    newnode->next = head;
    head = newnode;
}

void insertAtPos(int x, int pos)
{
    Node *temp = head;
    Node *newnode;
    if (pos == 1)
    {
        insertAtFirst(x);
    }
    else
    {
        int i = 0;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode=new Node();
        newnode->data = x;
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
    }
}

void deleteAtPos(int pos){
    Node *temp,*p;
    temp=head;
    int i=0;
    while(i<pos){
        p=temp;
        temp=temp->next;
        i++;
    }
    p->next=temp->next;
    temp->next->prev=p;
    delete temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    createList(arr, n);
    display(head);
    // insertAtFirst(10);
    // display(head);
    // insertAtPos(10, 5);
    // display(head);
    deleteAtPos(4);
    display(head);
    return 0;
}