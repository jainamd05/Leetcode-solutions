class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        // int min_sum = INT_MAX ;
        // for (int len = l ; len <= r ; len++){
        //     int sum = 0 ;
        //     for (int i = 0 ; i < len ; i++){
        //         sum += nums[i] ;
        //     }
        //     if (sum > 0) min_sum = min(min_sum, sum) ;

        //     int i = len , j = 0 ;
        //     while (i < nums.size()){
        //         sum = sum+nums[i]-nums[j] ;
        //         if (sum > 0) min_sum = min(min_sum, sum) ;
        //         i++ ; j++ ;
        //     }
        // }
        // if (min_sum == INT_MAX) return -1 ;
        // return min_sum ;

        int min_sum = INT_MAX ;
        vector<int> prefix_sum(nums.size()+1, 0) ;
        for (int i = 0 ; i < nums.size() ; i++) prefix_sum[i+1] = prefix_sum[i] + nums[i] ;

        for (int len = l ; len <= r ; len++){
            for (int i = 0 ; i <= nums.size()-len ; i++){
                int sum = prefix_sum[i+len] - prefix_sum[i] ;
                if (sum > 0) min_sum = min(min_sum, sum) ;
            }
        }
        return min_sum == INT_MAX ? -1 : min_sum ;
    }
};