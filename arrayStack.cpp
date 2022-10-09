#include<bits/stdc++.h>
using namespace std;

struct MyStack{
    int top;
    int size;
    int *arr;
    MyStack(int c){
        size=c;
        arr=new int[c];
        top=-1;
    }

    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow";
        }
        else{
            top++;
            arr[top]=x;
        }
    }

    int pop(){
        if(top==-1){
            cout<<"Stack Undeflow";
        }
        else{
            int res = arr[top];
            top--;
            return res;
        }
    }

    int peek(){
        if(top==-1){
            cout<<"Stack Undeflow";
        }
        else{
            return arr[top];
        }
    }

    int stackSize(){
        return top+1;
    }

};

int main(){
    
    MyStack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.peek();


return 0;
}