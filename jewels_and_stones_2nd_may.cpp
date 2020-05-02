class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> st;
        int ctr=0;
        
        for(int i=0;i<J.length();i++) st.insert(J[i]);
        
        for(int i=0;i<S.length();i++)
            if(st.find(S[i])!=st.end()) ctr++;
        
        return ctr;
    }
};