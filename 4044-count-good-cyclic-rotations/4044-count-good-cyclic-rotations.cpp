class Solution {
public:    
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size() ;
        long long left = 0 , total = 0 ;
        int score = 0 ;

        for (int i = 0 ; i < n ; i++){
            total += nums[i] ;
            if (i < int(n/2)) left += nums[i] ;
        }

        for(int i = 0 ; i < n ; i++){
            long long right = total - left ;
            if (left > right) score++ ;

            left -= nums[i] ;
            left += nums[(i+int(n/2))%n] ;
        }

        return score ;
    }
};