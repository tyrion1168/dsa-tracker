#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int h){
    int i,j,k;
    i=k=l;
    j=mid+1;
    int B[h+1];

    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            B[k++]=arr[i++];
        }
        else{
            B[k++]=arr[j++];
        }
    }
    for(;i<=mid;i++){
        B[k++]=arr[i];
    }
    
    for(;j<=h;j++){
        B[k++]=arr[j];
    }

    for(i=l;i<=h;i++){
        arr[i]=B[i];
    }
}


void mergeSort(int arr[],int l,int h){
    if(l>=h){
        return;
    }
    int mid=l+(h-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,mid,h);
}


int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,4);
    for(auto it : arr){
        cout<<it<<" ";
    }
return 0;
}