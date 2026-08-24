class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size() ;
        vector <int> stack ;
        int k = INT_MIN ;

        for(int i = n-1 ; i >= 0 ; i--){
            if (nums[i] < k) return true ;

            while (!stack.empty() && nums[i] > stack.back()) {
                k = stack.back();
                stack.pop_back();
            }
            stack.push_back(nums[i]);
        }

        return false ;
    }
};