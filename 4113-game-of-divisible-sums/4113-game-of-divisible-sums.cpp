class Solution {
public:
    long long maxDifference(vector<int>& nums) {
        int n = nums.size() ;
        vector<long long> dp(n+2, 0) ;

        for(int i = n-1 ; i >= 0 ; i--){
            if (nums[i]%3 == 0) dp[i] = nums[i] - dp[i+1] ;
            else dp[i] = nums[i] + dp[i+1] ;

            if (i+1 < n){
                long long sum = nums[i] + nums[i+1] ;

                long long val ;
                if (sum%3 == 0) val = sum - dp[i+2] ;
                else val = sum + dp[i+2] ;

                dp[i] = max(dp[i], val) ;
            }
        }
        return dp[0] ;
    }
};