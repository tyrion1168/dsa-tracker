#include<iostream>
#include<climits>
using namespace std;
struct node{
    int data;
    struct node *next;
    struct node *prev;

};

struct node *head=NULL,*temp;
void push(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next =NULL;
    newnode->prev =NULL;


    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    
}

void display(){
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int max_node(){
    int max=INT_MIN;
    temp=head;
    while(temp){
        if(temp->data>max){
            max=temp->data;
            temp=temp->next;
        }
    }
    return max;
}
int main(){
    push(1);
    push(2);
    push(5);
    push(7);
    push(9);

    display();

    cout<<max_node();

return 0;
}