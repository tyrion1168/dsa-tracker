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

void enqueueRear(struct queue *q,int x){
    if(q->rear==q->size-1){
        printf("Queue overflow\n");
    }
    q->rear++;
    q->Q[q->rear]=x;
}

void enqueueFront(struct queue *q,int x){
    if(q->front==-1){
        printf("Queue overflow\n");
    }
    else{
        q->Q[q->front]=x;
        q->front--;
    }
}

void dequeueFront(struct queue *q){
    if(q->front==q->rear){
        printf("Queue is empty\n");
    }
    q->front++;
    printf("Deleted element is %d\n",q->Q[q->front]);

}

void dequeueRear(struct queue *q){
     if(q->rear==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Deleted element is %d\n",q->Q[q->rear]);
        q->rear--;
    }
}

void display(struct queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        printf("%d ",q.Q[i]);
    }
    printf("\n");
}
int main(){
    struct queue q;
    create(&q);
    enqueueRear(&q,4);
    enqueueRear(&q,9);
    enqueueRear(&q,5);
    enqueueRear(&q,1);
    enqueueRear(&q,7);

    display(q);


    // dequeueFront(&q);
    // dequeueFront(&q);
    // dequeueFront(&q);

    dequeueRear(&q);
    dequeueRear(&q);
    dequeueRear(&q);


    enqueueRear(&q,5);

    // display(q);




    display(q);


return 0;
}