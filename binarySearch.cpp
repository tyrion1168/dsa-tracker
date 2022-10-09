#include <bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        // int mid=(start+end)/2;//can overflow
        int mid = start + end/ 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int agnosticBinSearch(int arr[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        bool isAsc = arr[0] < arr[n - 1] ? true : false;
        if (isAsc)
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
            if (arr[mid] < target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {100,78,53,9,1};
    cout << agnosticBinSearch(arr, 1, 5);
    return 0;
}
