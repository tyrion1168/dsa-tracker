#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void negative(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]<0){
            i++;
        }
        while(arr[j]>0){
            j--;
        }
        if(i<j){
        swap(&arr[i],&arr[j]);
        }
    }
}

int main() {
	int arr[]={-1,-2,-3,-4,5};
	negative(arr,5);
    for(auto value : arr){
        cout<<value<<" ";
    }
	return 0;
}