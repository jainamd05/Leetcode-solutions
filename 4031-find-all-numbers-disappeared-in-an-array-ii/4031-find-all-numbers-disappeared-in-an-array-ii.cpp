class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans ;

        sort(nums.begin(), nums.end()) ;

        int idx = lower ;
        for (int num : nums){
            if (num < lower || num > upper) continue ;
            if (idx <= num-1) ans.push_back({idx, num-1 }) ;

            idx = num + 1 ;
        }

        if (idx <= upper) ans.push_back({idx, upper}) ;
        return ans ;
    }
};