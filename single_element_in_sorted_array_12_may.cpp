class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        
        while(l<r){
            int mid=l+(r-l)/2;
                
            if(mid&1){
                if(nums[mid]==nums[mid-1]) l=mid+1;
                else r=mid-1;
                
            } else{
                if(nums[mid]==nums[mid+1]) l=mid+2;
                else r=mid;
            }    
        }
        
        return nums[l];
    }
};