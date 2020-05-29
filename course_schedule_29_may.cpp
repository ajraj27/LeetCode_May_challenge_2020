class Solution {
public:
    
    bool dfs(int u, vector<int>& color,vector<int> g[]){
        color[u]=1;
        for(int v:g[u]){
            if(color[v]==1) return true;
            if(color[v]==0 && dfs(v,color,g))
                return true;
        }
        
        color[u]=2;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> g[numCourses];
        vector<int> color(numCourses,0);
        
        for(int i=0;i<prerequisites.size();i++){
            g[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        for(int i=0;i<numCourses;i++){
            if(color[i]==0){
                if(dfs(i,color,g)) return false;
                
            }
            
        }
        
        return true;
        
        
        
    }
};