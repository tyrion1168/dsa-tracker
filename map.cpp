#include<bits/stdc++.h>
using namespace std;
int sum(unordered_map<char,int> mp){
    int sum=0;
    for(auto value : mp){
        sum+=value.second;
    }
    return sum;
}
int main(){
    unordered_map<char,int> mp;
    unordered_map<char,int>::iterator it=mp.begin();

    string s="";
    int i=0;
    int j=0;
    int mx=0;
    while(j<s.size()){
        mp[s[j]]++;

        if(mp.size()==sum(mp)){
            mx=max(mx,j-i+1);
            j++;
        }
        else{
            while(mp.size()<sum(mp)){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<mx;
    
return 0;
}


 int i=0,j=0,sum=0,min_len=INT_MAX;
        while(j<nums.size())
        {
            sum=sum+nums[j];
            if(sum<target) j++;
            else if(sum>=target)
            {
                while(sum-nums[i]>=target)
                {
                    sum=sum-nums[i];
                    i++;
                }
                min_len=min(min_len,j-i+1);
                j++;
            }
        }
        if(min_len==INT_MAX)
            return 0;
        return min_len;