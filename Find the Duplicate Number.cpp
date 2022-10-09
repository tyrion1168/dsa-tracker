#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    int maxNo = *max_element(nums.begin(), nums.end());
    int arr[maxNo+1]={0};
    for (auto value : nums)
    {
        arr[value]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 1)
        {
            return i;
        }
    }
}
int main()
{
    vector<int> arr={1,3,4,2,2};
    cout<<findDuplicate(arr);
    return 0;
}