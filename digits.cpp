#include<bits/stdc++.h>
using namespace std;

int digits(long long n)
{
    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}
//Takes O(1) time complexity
int digits(int num){
    return int(log10(num)+1);
}

int main(){
    cout<<digits(1);
return 0;
}
