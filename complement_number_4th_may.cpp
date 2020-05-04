class Solution {
public:
    int findComplement(int num) {
        
        int res=0;
        int i;
        for(i=31;((1<<i) & num)==0;i--);
        
        for(int j=i;j>=0;j--){
            if(num & (1<<j)) continue;
            res|=(1<<j);
        }
        
        return res;
    }
};