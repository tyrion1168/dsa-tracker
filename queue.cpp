#include<iostream>
using namespace std;
struct queue{
    int front;
    int rear;
    int size=5;
    int *Q;
};

void create(struct queue *q){
    q->front = -1;
    q->rear = -1;
    // cout<<"Enter the size\n";
    // scanf("%d",&q->size);
    q->Q=new int[q->size];

}

void push(struct queue *q,int x){
    if(q->rear == q->size-1){
        cout<<"Queue Overflow\n";
    }
    q->rear++;
    q->Q[q->rear]=x;
}

void dequeue(struct queue *q){
    if(q->front==q->rear){
        printf("Undeflow\n");
    }
    q->front++;
    printf("Deleted element is %d\n",q->Q[q->front]);
}

void display(struct queue q){
    if(q.front==q.rear){printf("Queue is empty\n");}
    for(int i=q.front+1;i<=q.rear;i++){
        printf("%d ",q.Q[i]);
    }
    printf("\n");
}
int main(){
    struct queue q;
    create(&q);
    push(&q,1);
    push(&q,2);
    push(&q,5);
    push(&q,8);
    push(&q,6);

    display(q);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    display(q);
    
return 0;
}