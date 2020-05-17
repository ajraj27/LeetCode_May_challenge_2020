class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
       int x=s.length();
        int y=p.length();
        
        if(y>x) return res;
        
        int left=0,right=0;
        
        vector<int> hash(26,0),phash(26,0);
        
        while(right<y){
            phash[p[right]-'a']++;
            hash[s[right++]-'a']++;
        }
        
        right--;
        while(right<x){
            if(hash==phash) res.push_back(left);
            right++;
            
            if(right!=x) hash[s[right]-'a']++;
            hash[s[left]-'a']--;
            left++;
        }
        
        return res;
    }
};