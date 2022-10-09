#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = 0;
    }
};

struct MyStack
{
    Node *top;
    int sz;
    MyStack()
    {
        top = 0;
        sz = 0;
    }

    void push(int x)
    {
        Node *newnode = new Node(x);
        newnode->next = top;
        top = newnode;
        sz++;
    }

    int pop()
    {
        if (top == NULL)
        {
            return INT_MAX;
        }
        else
        {
            int res = top->data;
            Node *temp = top;
            top = top->next;
            delete top;
            sz--;
            return res;
        }
    }

    int peek()
    {
        if (top == 0)
        {
            return INT_MAX;
        }
        else
        {
            return top->data;
        }
    }

    int size()
    {
        return sz;
    }
};

int main()
{

    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.peek() << endl;
    cout << s.size() << endl;
    s.pop();
    s.pop();
    cout << s.peek() << endl;
    cout << s.size() << endl;

    return 0;
}