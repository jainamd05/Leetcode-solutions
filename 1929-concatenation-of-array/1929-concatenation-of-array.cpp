class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size() ;
        vector<int> arr(2 * len);
        for ( int i = 0 ; i < len+len ; i++ ){
            arr[i] = nums[i%len] ;
        }
        return arr ;
    }
};