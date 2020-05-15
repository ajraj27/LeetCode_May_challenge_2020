class Solution {
public:
    
    int kadane(vector<int>& A){
        int mx=INT_MIN,curr=0;
        
        for(int i=0;i<A.size();i++){
            curr=max(A[i],curr+A[i]);
            mx=max(mx,curr);
        }
        
        return mx;
    }
    
    int maxSubarraySumCircular(vector<int>& A) {
        int flag=0,mx=INT_MIN;
        for(int i=0;i<A.size();i++){
            mx=max(mx,A[i]);
            if(A[i]>0) flag=1;
        }
        
        if(!flag) return mx;
        
        int mx1=kadane(A);
        int sm=0;
        
        for(int i=0;i<A.size();i++){
            sm+=A[i];
            A[i]=-A[i];
        }
        
        int mx2=sm+kadane(A);
        return max(mx1,mx2);
    }
};