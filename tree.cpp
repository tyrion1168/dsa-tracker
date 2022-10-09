#include<iostream>
using namespace std;
struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;
struct node *create(){
    struct node *newnode;
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data(-1 for no node):\n");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("Enter the left child of %d\n",x);
    newnode->lchild=create();
    printf("Enter the right child of %d\n",x);
    newnode->rchild=create();
    return newnode;

}
int height(struct node *p){
    int x,y;
    if(p){
        x=height(p->lchild);
        y=height(p->rchild);
        x>y?x+1:y+1;
    }
    return 0;
}

void printLevel(struct node *p,int level){
    if(!p){
        return;
    }
    if(level==1){
        printf("%d ",p->data);
    }
    else if(level>1){
        printLevel(p->lchild,level-1);
        printLevel(p->rchild,level-1);
    }
}
void inorder(struct node *p){
    if(p==0){
        return;
    }
    inorder(p->lchild);
    printf("%d ",p->data);
    inorder(p->rchild);

}
void preorder(struct node *p){
    if(p==0){
        return;
    }
    preorder(p->lchild);
    printf("%d ",p->data);
    preorder(p->rchild);
    
}

void postorder(struct node *p){
    if(p==0){
        return;
    }
    postorder(p->lchild);
    printf("%d ",p->data);
    postorder(p->rchild);
}
void levelOrder(struct node *p){
    int h=height(p);
    for(int i=1;i<=h;i++){
        printLevel(p,i);
    }

}

int nodes(struct node *p){
    int x,y;
    if(p!=NULL){
        x=nodes(p->lchild);
        y=nodes(p->rchild);
        return x+y+1;
    }
    return 0;
}

int nodesSum(struct node *p){
    int x,y;
    if(p!=NULL){
        x=nodes(p->lchild);
        y=nodes(p->rchild);
        return p->data+x+y;
    }
    return 0;
}

int main(){

    root=create();
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    levelOrder(root);
    printf("\n");
    cout<<nodes(root)<<endl;
    cout<<nodesSum(root)<<endl;
    cout<<height(root)<<endl;
return 0;
}