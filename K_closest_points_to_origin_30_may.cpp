class Solution {
public:
    
    struct cmp{
        bool operator()(pair<pair<int,int>, int> const &a,pair<pair<int,int>, int> const &b){
            if(a.second<b.second) return true;
            return false;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int> > res;
        if(points.size()==0 ) return res;
        priority_queue<pair<pair<int,int>, int>,vector<pair<pair<int,int>,int > >, cmp > pq;
        int dist;
        for(int i=0;i<K;i++){
            dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.push(make_pair(make_pair(points[i][0],points[i][1]),dist));
        }
        
        for(int i=K;i<points.size();i++){
            int temp=pq.top().second;
            dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            if(dist<temp){
                pq.pop();
                pq.push(make_pair(make_pair(points[i][0],points[i][1]),dist));

            }
        }
        
        while(!pq.empty()){
            vector<int> t;
            t.push_back(pq.top().first.first);
            t.push_back(pq.top().first.second);
            res.push_back(t);
            pq.pop();
        }
        
        return res;
        
    }
};