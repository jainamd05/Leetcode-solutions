class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1 , dec = 1 ;
        
        // for increasing
        int len = 1 ;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if (nums[i] < nums[i+1]) len++ ;
            else{
                inc = max(len, inc) ;
                len = 1 ;
            }
        }
        inc = max(len, inc) ;

        // for decreasing
        len = 1 ;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if (nums[i] > nums[i+1]) len++ ;
            else{
                dec = max(len, dec) ;
                len = 1 ;
            }
        }
        dec = max(len, dec) ;
        
        return max(inc, dec) ;
    }
};