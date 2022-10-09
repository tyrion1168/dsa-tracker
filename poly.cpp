#include <iostream>
#include <math.h>
using namespace std;
struct node
{
    int coeff;
    int exp;
    struct node *next;
};
struct node *poly = NULL;
void create(struct node *p)
{
    int num;
    struct node *t, *last = NULL;
    printf("Enter the number of terms\n");
    scanf("%d", &num);
    printf("Enter the coeff and exp\n");
    for (int i = 0; i < num; i++)
    {
        t = new node;
        scanf("%d %d", &t->coeff, &t->exp);
        if (poly == NULL)
        {
            poly = last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
}

void display(struct node *p)
{
    while (p)
    {
        printf("%dx%d +", p->coeff, p->exp);
        p = p->next;
    }
    printf("\n");
}

long eval(struct node *p,int x){
    long val=0;
    while(p){
        val+=p->coeff*pow(x,p->exp);
        p=p->next;
    }
    return val;
}

int main()
{
    create(poly);
    display(poly);
    printf("%ld", eval(poly, 1));
    return 0;
}