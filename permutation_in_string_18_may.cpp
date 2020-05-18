class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int x=s1.length();
        int y=s2.length();
        
        if(x>y) return false;
        
        vector<int> phash(26,0),hash(26,0);
        
        int left=0,right=0;
        
        while(right<x){
            phash[s1[right]-'a']++;
            hash[s2[right++]-'a']++;
        }
        
        right--;
        
        while(right<y){
            if(phash==hash) return true;
            right++;
            
            if(right!=y) hash[s2[right]-'a']++;
            hash[s2[left++]-'a']--;
        }
        
        return false;
    }
};