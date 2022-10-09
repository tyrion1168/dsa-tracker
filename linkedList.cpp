#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void createList(int a[], int n)
{
    Node *newNode, *temp;
    for (int i = 0; i < n; i++)
    {
        newNode = new Node;
        newNode->data = a[i];
        newNode->next = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
}

void display()
{
    Node *p = head;
    if (head == 0)
    {
        cout << "List is empty";
    }
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout<<endl;
}

void insertAtFirst(int x)
{
    Node *newnode = new Node;
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void insertAtLast(int x)
{
    Node *newnode = new Node;
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *p = head;
        while (p->next != 0)
        {
            p = p->next;
        }
        p->next = newnode;
    }
}

void insertAtPos(int pos, int x)
{
    Node *p = head;
    Node *newnode;
    if (pos == 0)
    {
        insertAtFirst(x);
    }
    else
    {
        int i = 0;
        while (i < pos - 1)
        {
            p = p->next;
            i++;
        }
        if (p)
        {
            newnode = new Node;
            newnode->data = x;
            newnode->next = p->next;
            p->next = newnode;
        }
    }
}

void deleteAtFirst()
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

void delAtPos(int pos)
{
    Node *p = head;
    Node *q = NULL;
    if (pos == 0)
    {
        deleteAtFirst();
    }
    else
    {
        int i = 0;
        while (i < pos)
        {
            q = p;
            p = p->next;
            i++;
        }
        q->next = p->next;
        delete p;
    }
}

int count(Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return count(p->next) + 1;
    }
}

bool sorted()
{
    Node *p = head;
    int x = INT_MIN;
    while (p)
    {
        if (p->data < x)
        {
            return false;
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    return true;
}

void insertAtSorted(int x){
    Node *p=head,*q=NULL;
    Node *t=new Node;
    t->data=x;
    t->next=0;
    while(p && p->data<x){
        q=p;
        p=p->next;
    }
    if(p==head){
        t->next=head;
        head=t;
    }
    else{
        t->next=q->next;
        q->next=t;
    }
}

void removeDuplicates(){
    Node *p=head;
    Node *q=NULL;
    while(p->next!=0){
        if(p->data!=p->next->data){
            q=p;
            p=p->next;
        }
        else{
        q->next=p->next;
        delete p;
        p=q->next;
        }
    }
}

void reverseLL(){
    Node *p=head,*q=NULL,*r=NULL;
    while(p!=0){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}



int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    // int a[]={2,3,5,7,9,11,13};
    // int a[]={1,2,2,2,3,4,5,5};
    createList(a, 7);
    // insertAtFirst(10);
    // insertAtLast(20);
    // insertAtPos(8,30);
    // insertAtPos(4,25);
    // deleteAtFirst();
    // deleteAtFirst();
    // delAtPos(4);
    display();
    // cout << count(head) << endl;
    // cout<<sorted();
    // insertAtSorted(1);
    // removeDuplicates();
    reverseLL();
    display();
    return 0;
}