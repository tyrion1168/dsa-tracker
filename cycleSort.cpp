#include<bits/stdc++.h>
using namespace std;

void cycleSort(int a[],int n){
    int i=0;
    while(i<n){
        if(a[i]-i!=1){
            swap(a[i],a[a[i]-1]);
        }
        else{
            i++;
        }
    }
}
int main(){
    int a[]={3,5,2,1,4,7,8,6};
    cycleSort(a,8);
    for(auto value : a){
        cout<<value<<" ";
    }
return 0;
}