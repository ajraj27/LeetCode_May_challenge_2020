class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q;
        map<char,int> m;
        
        for(int i=0;i<s.length();i++){
            q.push(i);
            m[s[i]]++;
            
            while(!q.empty() && m[s[q.front()]]>1) q.pop();
            
        }
        
        if(q.empty()) return -1;
        else return q.front();
    }
};