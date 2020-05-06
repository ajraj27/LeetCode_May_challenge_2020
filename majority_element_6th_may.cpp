class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int idx=0;
        int ctr=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[idx]) ctr++;
            else ctr--;
            
            if(ctr==0){
                idx=i;
                ctr=1;
            }
        }
        
        return nums[idx];
        
    }
};