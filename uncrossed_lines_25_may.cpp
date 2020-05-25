class Solution {
public:
    
    int solve(int i,int j,vector<int>& A,vector<int>& B,vector<vector<int> >& dp){
        if(i>=A.size() || j>=B.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int n2=j;
        
        while(n2<B.size() && A[i]!=B[n2]) n2++;
        int x=solve(i+1,j,A,B,dp);
        int y=(n2<B.size()?1:0) +  solve(i+1,n2+1,A,B,dp);
        return dp[i][j]=max(x,y);
    }
    
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int n1=A.size();
        int n2=B.size();
        vector<vector<int> > dp(n1,vector<int>(n2,-1));
        return solve(0,0,A,B,dp);
    }
};