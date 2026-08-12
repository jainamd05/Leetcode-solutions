class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0 ; int start = -1 ;
        unordered_map <int, int> freq ;

        for(int i = 0 ; i < nums.size() ; i++){
            freq[nums[i]]++ ;
            while(freq[nums[i]] > k){
                start++ ;
                freq[nums[start]]-- ;
            }
            ans = max(ans, i-start);
        }
        return ans ;
    }
};