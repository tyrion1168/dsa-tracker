#include <iostream>
using namespace std;

int binSearch(int arr[],int target,int start,int end){
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(target==arr[mid]){
            return mid;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int infiniteBinarySearch(int arr[],int target){
    int start=0;
    int end=1;
    
    while(target>arr[end]){
        int newStart=end+1;
        end=end+(end-start)*2;//doubling the window size 
        start=newStart;
    }
    //now the chunk is found where target is
    return binSearch(arr,target,start,end);
}

int main() {
	int arr[]={1,3,5,7,11,20,44,50,55,79,99,134,165,190};
	cout<<infiniteBinarySearch(arr,134);
	
	return 0;
}