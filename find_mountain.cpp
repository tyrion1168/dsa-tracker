#include <bits/stdc++.h>
using namespace std;

int bin_search(int arr[], int start, int end, int target)
{
    bool isAsc;
    if (arr[start] < arr[end])
    {
        isAsc = true;
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (isAsc)
        {
            if (arr[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] > target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int peak(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            //in decreasing side
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
    //start and end will point on the max no
}

int search(int arr[], int target, int n)
{
    int part = peak(arr, n);
    if (target == arr[part])
    {
        return part;
    }
    int ans = bin_search(arr, 0, part - 1, target);
    if (ans != -1)
    {
        return ans;
    }
    ans = bin_search(arr, part + 1, n - 1, target);
    return ans;
}
int main()
{
    // int arr[] = {1, 3, 5, 7, 10, 6, 3, 2, 5};
    int arr[]={0,5,3,1};
    cout << search(arr, 1, 4);
    return 0;
}
