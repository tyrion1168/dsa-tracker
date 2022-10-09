#include <iostream>
struct node
{
    int data;
    struct node *next;
};
struct node *head = 0;

void create(int A[], int n)
{
    struct node *t, *last;
    head = new node;
    head->data = A[0];
    head->next = 0;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = 0;
        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

struct node *search(struct node *p, int key)
{
    struct node *q=0;
    if (p == 0)
    {
        return 0;
    }
    while (p != 0)
    {

        if (key == p->data)
        {
            q->next=p->next;
            p->next =head;
            head=p;
            return p;
        }
        q=p;
        p = p->next;
    }
    return 0;
}

void insert(int pos,int key){
    struct node *t,*p;
    if(pos==0){
        t=new node;
        t->data=key;
        t->next=head;
        head=t;
    }
    else if(pos>0){
        p=head;
        for(int i=0;i<pos-1&&p;i++){
            p=p->next;
        }
        if(p!=0){
            t=new node;
            t->data=key;
            t->next=p->next;
            p->next=t;
        }
    }
}
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 6};
    create(A, 5);
    display(head);
    printf("\n");
    printf("Address of the key is %d\n", search(head, 2));
    display(head);
    printf("\n");
    insert(0,12);
    insert(3,17);
    insert(4,18);
    display(head);
    return 0;
}