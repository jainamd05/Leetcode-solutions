class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int i = 0 ; i < nums.size() ; i++) nums[i] = abs(nums[i]) ;

        sort(nums.begin(), nums.end()) ;

        long long ans = 0;
        int start = 0 , end = nums.size() - 1 ;
        while (start <= end){
            if (start == end){
                ans += (nums[end]*nums[end]) ;
                break ;
            }
            ans += (nums[end]*nums[end]) ;
            ans -= (nums[start]*nums[start]) ;

            end-- ; start++ ;
        }
        return ans ;
    }
};