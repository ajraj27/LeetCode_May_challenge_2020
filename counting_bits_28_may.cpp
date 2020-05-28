class Solution {
public:
    
    int prevTwoPower(int n){
        int k=(int)(log2(n));
        return (int)(pow(2,k));
    }
    vector<int> countBits(int num) {
        vector<int> dp(num+1,0);
        for(int i=1;i<=num;i++){
            int z=prevTwoPower(i);
            dp[i]=1+dp[i-z];
        }
        
        return dp;
    }
};