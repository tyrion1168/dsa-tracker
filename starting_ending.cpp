class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans={-1,-1};
        
        ans[0]=search(nums,target,true,n);
        if(ans[0]!=-1){
            ans[1]=search(nums,target,false,n);
        }
        return ans;
    }  
    
    int search(vector<int>&nums,int target,bool isFirstIndex,int n){
        int ans=-1;
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(target>nums[mid]){
                s=mid+1;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }
            else{
                ans=mid;
                if(isFirstIndex){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                } 
            }
        }
        return ans;
    }
};