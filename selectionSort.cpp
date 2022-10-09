#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n){
    int k;
    for(int i=0;i<n-1;i++){
        for(int j=k=i;j<n;j++){
            if(a[j]<a[k]){
                k=j;// k will point on the minimum element in each pass
            }
        }
        swap(a[i],a[k]);
    }
}
int main(){
    int a[]={8,6,3,2,5,4};
    selectionSort(a,6);
    for(auto value : a){
        cout<<value<<" ";
    }
return 0;
}