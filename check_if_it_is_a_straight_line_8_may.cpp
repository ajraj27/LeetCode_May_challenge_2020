class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        int x1=coordinates[0][0];
        int y1=coordinates[0][1];
        int notD=0;
        set<double> s;
        
        for(int i=1;i<n;i++){
            int x=coordinates[i][0];
            int y=coordinates[i][1];
            if(x==x1) notD++;
            else{
                double d=(double)(y-y1)/(x-x1);
                s.insert(d);
            }
        }
        
        if(notD==n-1 || s.size()==1) return true;
        return false;
    }
};