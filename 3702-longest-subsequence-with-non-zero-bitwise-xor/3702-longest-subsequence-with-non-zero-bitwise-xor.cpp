class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size() ;
        bool allzero = true ;
        int xr = 0 ;
        for (int i : nums){
            xr ^= i ;
            if (i > 0) allzero = false ;
        }
        if (xr>0) return n ;

        return allzero ? 0 : n-1 ;       
    }
};