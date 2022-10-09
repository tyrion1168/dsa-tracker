#include<bits/stdc++.h>
using namespace std;

char sLetters(char letters[],int n,char target){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(target<letters[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return letters[s%n];
}

int main(){
    
    char letters[]={'a','b','c','d','e'};
    cout<<sLetters(letters,5,'a');
return 0;
}


        // int mid=s+(e-s)/2;
        // if(target>letters[mid]){
        //     s=mid+1;
        // }
        // else{
        //     e=mid-1;
        // }