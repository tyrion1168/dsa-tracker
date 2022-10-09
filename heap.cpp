#include<bits/stdc++.h>
using namespace std;

void insert(int a[],int n){
    int i=n;
    int temp=a[n];
    while(i>=1 && temp>a[(i-1)/2]){
        swap(a[i],a[(i-1)/2]);
        i=(i-1)/2;
    }
}

void createHeap(int a[],int n){
    for(int i=0;i<=n;i++){
        insert(a,i);
    }
}


void deleteHeap(int a[],int n){
    int x=a[0];
    a[0]=a[n];
    int i=0;
    int j=2*i+1;//left child of root
    while(j<n){
        if(a[j+1]>a[j]){//right child is greater than left
            j=j+1;
        }

        if(a[i]<a[j]){
            swap(a[i],a[j]);
        }
        else{
            break;
        }
        i=j;
        j=2*i+1;
    }
    // cout<<x;
    // a[n]=x;
    a[n]=x;

    
}

void heapSort(int a[],int n){
    for(int i=n;i>=0;i--){
        deleteHeap(a,i);
    }
}



int main(){
    // int a[]={40,35,15,30,10,12,6,5,20,50};
    int a[]={1,5,2,7,10,20,4,3};
    // insert(a,9);
    createHeap(a,7);
    heapSort(a,7);
    for(auto it : a){
        cout<<it<<" ";
    }

return 0;
}