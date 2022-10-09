#include<bits/stdc++.h>
using namespace std;

int peak(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int mid=start+(end-start)/2;

        if(arr[mid]>arr[mid+1]){
            //in decreasing side
            end=mid;
        }
        else{
            start=mid+1;
        }
    }
    return arr[start];
    //start and end will point on the max no
}

int main(){
    
    int arr[]={1,3,5,7,10,6,3,2};
    cout<<peak(arr,8);
return 0;
}