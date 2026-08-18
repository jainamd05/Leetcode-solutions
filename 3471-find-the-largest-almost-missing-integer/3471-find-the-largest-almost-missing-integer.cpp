class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size() ;

        // Special Case for k = 1
        if (k == 1){
            unordered_map<int, int> freq;

            for (int x : nums) {
                freq[x]++;
            }

            int ans = -1;

            for (int x : nums) {
                if (freq[x] == 1) {
                    ans = max(ans, x);
                }
            }

            return ans;
        }

        if (k == n) return *max_element(nums.begin(), nums.end()) ;

        int first = nums[0] ;
        int last = nums[n-1] ;

        if (first == last) return -1;

        bool first_element = false ;
        bool last_element = false ;

        for(int i = 1 ; i < nums.size()-1 ; i++){
            if (nums[i] == first) first_element = true ;
            if (nums[i] == last) last_element = true ;
        }
        
        if (first_element && !last_element) return last ;
        else if (!first_element && last_element) return first ;
        else if (!first_element && !last_element) return max(first, last) ;
        else return -1 ;
    }
};