class Solution {
public:
    
    bool poss=true;
    
    void dfs(int u,int val,vector<int> g[],vector<int>& colour){
        colour[u]=val;
        
        for(int v:g[u]){
            if(colour[v]==-1) dfs(v,!val,g,colour);
            else if(colour[v]==colour[u]) poss=false;
        }
    }
    
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<int> g[N+1];
        vector<int> colour(N+1,-1);
        
        for(int i=0;i<dislikes.size();i++){
            g[dislikes[i][0]].push_back(dislikes[i][1]);
            g[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        for(int i=1;i<=N;i++){
            if(colour[i]==-1) dfs(i,0,g,colour);
        }
        
        return poss;
        
    }
};