#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int target,int s,int e){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return binary_search(arr,target,s,mid-1);
    }
    return binary_search(arr,target,mid+1,e);
}

int binarysearch_itr(int arr[],int target,int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,7,9,10};
    int target=2;
    cout<<binary_search(arr,target,0,6)<<endl;
    cout<<binarysearch_itr(arr,target,7);
    return 0;
}