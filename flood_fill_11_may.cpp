class Solution {
public:
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    
    void dfs(vector<vector<int>>& image,int x,int y,int col,int newColor,int n,int m){
        if(x<0 || y<0 || x>=n || y>=m || image[x][y]!=col) return;
        image[x][y]=newColor;
        
        for(int i=0;i<4;i++)
            dfs(image,x+dx[i],y+dy[i],col,newColor,n,m);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        
        int col=image[sr][sc];
        if(col!=newColor)
            dfs(image,sr,sc,col,newColor,n,m);
        
        return image;
    }
};