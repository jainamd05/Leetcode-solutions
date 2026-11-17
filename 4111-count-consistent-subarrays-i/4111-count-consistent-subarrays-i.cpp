class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ans = nums.size() ;
        for (int i = 0 ; i < nums.size() ; i++){
            int val = nums[i] ;

            for (int j = i+1 ; j < nums.size() ; j++){
                val &= nums[j] ;
                if (val == *min_element(nums.begin()+i, nums.begin()+j+1)) ans++ ;
            }
        }
        return ans ;
    }
};