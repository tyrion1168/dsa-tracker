#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int x=a[i];
        while(j>-1 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
int main(){
    int a[]={8,6,3,2,5,4};
    insertionSort(a,6);
    for(auto value : a){
        cout<<value<<" ";
    }
return 0;
}