#include<iostream>
using namespace std;
struct queue{
    int front;
    int rear;
    int size=5;
    int *Q;
};

void create(struct queue *q){
    q->front = 0;
    q->rear = 0;
    // cout<<"Enter the size\n";
    // scanf("%d",&q->size);
    q->Q=new int[q->size];

}

void push(struct queue *q,int x){
    if((q->rear+1)%q->size==q->rear)
        printf("Queue Is full\n");
    q->rear=(q->rear+1)%q->size;
    q->Q[q->rear]=x;    
}

void dequeue(struct queue *q){
    if(q->front==q->rear){
        printf("Stack is empty\n");
    }
    q->front=(q->front+1)%q->size;
    printf("Deleted element is %d\n",q->Q[q->front]);
}

void display(struct queue q){
    if(q.front==q.rear){
        printf("Queue is empty\n");
    }
    int i=q.front+1;
    do{
        printf("%d ",q.Q[i]);
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    printf("\n");
}
int main(){
     struct queue q;
    create(&q);
    push(&q,1);
    push(&q,2);
    push(&q,5);
    push(&q,8);

    display(q);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    display(q);
return 0;
}