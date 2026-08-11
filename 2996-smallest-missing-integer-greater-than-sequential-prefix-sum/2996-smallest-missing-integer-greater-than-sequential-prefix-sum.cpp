class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        // int index = 0 ; 
        int add = nums[0] ;
        for (int i = 1 ; i < nums.size() ; i++){
            if (nums[i] != nums[i-1]+1) break ;
            // index++ ;
            add += nums[i] ;
        }

        while (num_set.count(add)) {
            add += 1;
        }

        return add ;
    }
};