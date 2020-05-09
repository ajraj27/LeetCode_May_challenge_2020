class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int l=1,r=num;
        
        while(l<=r){
            long long int mid = l+(r-l)/2;
            long long int z=mid*mid;
            if(z==num) return true;
            else if(z>num)r=mid-1;
            else l=mid+1;
        }
        
        return false;
        
    }
};