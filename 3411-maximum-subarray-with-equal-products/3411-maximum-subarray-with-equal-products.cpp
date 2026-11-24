class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 2 ;
        int prod_val = 1 ;
        int n = nums.size() ;
        int start = 0 , end = 0 ;

        while (end < n){
            while (gcd(prod_val, nums[end]) > 1){
                prod_val /= nums[start] ;
                start++ ;
            }
            prod_val *= nums[end] ;
            ans = max(ans, end-start+1) ;
            end++ ;
        }
        return ans ;
    }
};