#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){
    bool swapped=false;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
int main(){
    int a[]={8,6,3,2,5,4};
    bubbleSort(a,6);
    for(auto value : a){
        cout<<value<<" ";
    }
return 0;
}