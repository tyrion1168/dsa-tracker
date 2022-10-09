#include<iostream>
using namespace std;
void insertionSort(int A[],int n){
    int x,j;
    for(int i=1;i<n;i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]<x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main(){
    int A[]={1,2,3,4,5,10};
    insertionSort(A,6);
    for(int i=0;i<6;i++){
        cout<<A[i]<<" ";
    }
return 0;
}