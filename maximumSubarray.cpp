#include<bits/stdc++.h>
using namespace std;

//O(N^3)
// int maxSubarray(int a[],int n){
//     int maxSum=INT_MIN;
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum=sum+a[i];
//             }
//             maxSum=max(sum,maxSum);
//         }
//     }
//     return maxSum;
// }


//O(n^2)
int maxSubarray(int a[],int n){
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+a[j];
        maxSum=max(sum,maxSum);
        }
    }
    return maxSum;
}

//O(N)-->Kadane Algorithm
int main(){
    // int arr[]={1,2,3,-2,5};
    int arr[]={-44,58};
    cout<<maxSubarray(arr,2);
return 0;
}