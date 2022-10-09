#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0){
        return;
    }
    fun(n-1);
    cout<<n<<" ";
} 

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int digitSum(int n){
    if(n==0){
        return 0;
    }
    return digitSum(n/10)+n%10;
}

static int sum=0;
void reverse(int n){
    if(n==0){
        return;
    }
    int rem=n%10;
    sum=sum*10+rem;
    reverse(n/10);
}

int reverse2(int n,int digit){
    if(n%10==n){
        return n;//if number becomes single return the same number
    }
    return (n%10)*pow(10,digit-1)+reverse2(n/10,digit-1);
}

int noDigits(int n){
    int digits=log10(n)+1;
    return reverse2(n,digits);
}


bool sorted(int arr[],int n,int index){
    if(index==n-1){
        return true;
    }
    return arr[index]<arr[index+1] && sorted(arr,n,index+1);
}

int search(int arr[],int n,int target,int index){
    if(index==n){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    return search(arr,n,target,index+1);
}

vector<int> searchAll(vector<int> arr,int target,int index){
    static vector<int> ans;
    if(index==arr.size()){
        return ans;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
    return searchAll(arr,target,index+1);
}




int main(){
    // fun(5);
    // cout<<factorial(5);
    // cout<<digitSum(1342);
    // reverse(1234);
    // cout<<sum;
    // cout<<noDigits(1234);
    // int arr[]={1,2,3,6,6,5};
    vector<int> arr={1,2,3,4,4,5};
    vector<int> ans;
    // cout<<sorted(arr,5,0);
    // cout<<search(arr,5,2,0);
    ans=searchAll(arr,4,0);
    for(auto it : ans){
        cout<<it<<" ";
    }
return 0;
}