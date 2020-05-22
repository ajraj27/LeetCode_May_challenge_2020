class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,int> > v(123,{0,0});
        for(int i=0;i<s.length();i++){
            int x=s[i];
            v[x]={++v[x].first,x};
        }
        
        sort(v.rbegin(),v.rend());
        int i=0;
        string str="";
        
        while(v[i].first>0){
            char ch=v[i].second;
            str+=string(v[i].first,ch);
            i++;
        }
        
        return str;
        
    }
};