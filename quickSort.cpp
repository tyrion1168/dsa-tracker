#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h){
    int i=l;
    int j=h+1;
    int pivot=a[l];
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j){
            swap(a[i],a[j]);
        }
    }while(i<j);
    swap(a[l],a[j]);
    return j;
}


void quickSort(int a[],int l,int h){
    if(l<h){
        int j=partition(a,l,h);
        quickSort(a,l,j);
        quickSort(a,j+1,h);
    }
}

int main(){
    int arr[]={50,70,60,90,40,80,10,20,30};
    quickSort(arr,0,8);
    for(auto it : arr){
        cout<<it<<" ";
    }
return 0;
}h