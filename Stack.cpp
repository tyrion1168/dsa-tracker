#include<iostream>
#define N 100
using namespace std;
struct stack{
    int s[N];
    int top=-1;
};

void push(struct stack *s,int x){
    if(s->top==N-1)cout<<"Stack Overflow\n";

    s->top++;
    s->s[s->top]=x;
}

void display(struct stack s){
    if(s.top==-1)printf("Stack is empty\n");
    for(int i=s.top;i>=0;i--){
        printf("%d ",s.s[i]);
    }
}   

void pop(struct stack *s){
    if(s->top==-1)printf("Underflow\n");
    int item=s->s[s->top];
    s->top--;
    printf("Popped element is %d\n",item);
}

int peek(struct stack s){
    if(s.top==-1){
        printf("Stack is empty\n");
    }
    printf("Topmost element is %d",s.s[s.top]);
}
int main(){
    struct stack s1;
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);
    push(&s1,6);
    push(&s1,9);

    display(s1);
    cout<<endl;

    pop(&s1);
    pop(&s1);
    pop(&s1);

    display(s1);
    cout<<endl;

    peek(s1);

return 0;
}