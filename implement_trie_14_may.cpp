class Trie {
public:
    /** Initialize your data structure here. */
    typedef struct data{
        data* child[26];
        int cnt;
    }trie;
    
    trie* root;

    Trie() {
        root = new trie();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        trie* curr=root;
        
        for(int i=0;i<word.length();i++){
            char ch=word[i];
            int reqd=ch-'a';
            if(!curr->child[reqd]) curr->child[reqd]=new trie();
            curr=curr->child[reqd];
        }

        curr->cnt++;
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        trie* curr=root;
        
        for(int i=0;i<word.length();i++){
            char ch=word[i];
            int reqd=ch-'a';
            if(curr->child[reqd]) curr=curr->child[reqd];  
            else return false;
        }
        
        return curr->cnt > 0;
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        
        trie* curr=root;
        
        for(int i=0;i<prefix.length();i++){
            char ch=prefix[i];
            int reqd=ch-'a';
            if(curr->child[reqd]) curr=curr->child[reqd];  
            else return false;
        }
        
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */