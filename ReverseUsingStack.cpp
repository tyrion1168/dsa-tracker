#include<iostream>
#include<string.h>
using namespace std;
struct stack{
    int top;
    char *st;
    int size;
};

void create(struct stack *s,int size){
    s->top=-1;
    s->st =new char[size];
    s->size =size;
}

void push(struct stack *s,char item){
    if(s->top==s->size-1){
        printf("Stack overflow\n");
    }
    else{
        s->top++;
        s->st[s->top]=item;
    }
}

char pop(struct stack *s){
    char x;
    if(s->top==-1){
        printf("Stack is empty\n");
    }
    else{
        
        x=s->st[s->top];
        s->top--;
    }
    return x;
}

void reverse(char str[]){
    int n=strlen(str);
    struct stack sta;
    create(&sta,n);
    for(int i=0;i<n;i++){
        push(&sta,str[i]);
    }

    for(int i=0;i<n;i++){
        str[i]=pop(&sta);
    }
}
int main(){
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    reverse(str);
    cout<<str<<endl;
return 0;
}