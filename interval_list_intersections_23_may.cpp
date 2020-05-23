class Solution {
public:
    
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n1=A.size();
        int n2=B.size();
        int i=0,j=0;
        vector<vector<int> > res;
        while(i<n1 && j<n2){
            int lo=max(A[i][0],B[j][0]);
            int hi=min(A[i][1],B[j][1]);
            if(lo<=hi){
                vector<int> pair{lo,hi};
                res.push_back(pair);
            } 
            
            if(A[i][1]<=B[j][1]){
                i++;
            } else {
                j++;
            } 
        }
        
        return res;
        
    }
};