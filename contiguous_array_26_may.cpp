class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> m;
        int mx=0,curr=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]?1:-1;
            curr+=x;
            
            if(curr==0)  mx=i+1;
        
            else if(m.find(curr)!=m.end()){
                if(i-m[curr]>mx) mx=max(mx,i-m[curr]);  
            }
            
            else m[curr]=i;  
        }
        
        return mx;
        
    }
};