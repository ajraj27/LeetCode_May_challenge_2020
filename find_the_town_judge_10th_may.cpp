class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
         vector<int> a(N+1,0),b(N+1,0);
        
        for(int i=0;i<trust.size();i++){
            int x=trust[i][0];
            int y=trust[i][1];
            
            a[y]++;
            b[x]++;
        }
        
        int ctr=0,idx;
        for(int i=1;i<=N;i++){
            if(a[i]==N-1 && !b[i]){
                ctr++;
                idx=i;
            } 
        }
        
        if(ctr==1) return idx;
        return -1;
    }
};