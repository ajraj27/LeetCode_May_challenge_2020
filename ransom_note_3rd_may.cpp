class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1=ransomNote.length();
        int l2=magazine.length();
        
        int freq[26]={0};
        
        for(int i=0;i<l2;i++) freq[magazine[i]-'a']++;
        
        for(int i=0;i<l1;i++){
            if(freq[ransomNote[i]-'a']==0) return false;
            freq[ransomNote[i]-'a']--;
        }
        
        return true;
    }
};