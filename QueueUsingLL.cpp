#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int x){
    struct node *t;
    t=new node;
    if(t==NULL){
        printf("Queue is FULL\n");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}

    int dequeue(){
    struct node *p;
    int x=-1;
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        p=front;
        x=p->data;
        front=front->next;
        free(p);
    }
    return x;
}

void display(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    struct node *temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    enqueue(3);
    enqueue(4);
    enqueue(6);
    enqueue(9);

    display();

    cout<<"Deleted element is: "<<dequeue()<<endl;
    cout<<"Deleted element is: "<<dequeue()<<endl;
    cout<<"Deleted element is: "<<dequeue()<<endl;

    display();
    
    
return 0;
}