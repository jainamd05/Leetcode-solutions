class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        vector <vector <int>> factors ;

        for (int num : nums){
            vector <int> temp ;
            for (int i = 2 ; i * i <= num ; i++){
                if (num%i == 0) temp.push_back(i) ;

                while (num % i == 0) num /= i ;
            }
            if (num > 1) temp.push_back(num) ;
            
            factors.push_back(temp) ;
        }

        unordered_map<int, int> freq ;
        int left = 0 ;
        int dis = 0 ;
        int ans = 0 ;

        for (int right = 0 ; right <  nums.size() ; right++){
            for (int f : factors[right]){
                freq[f]++ ;

                if (freq[f] == 1) dis++ ;
            }
            
            while (dis > k){
                for (int rf : factors[left]){
                    freq[rf]-- ;
    
                    if (freq[rf] == 0) dis-- ;
                }
                left++ ;
            }
            ans = max(ans, right - left + 1) ;
        }
        return ans ;
    }
};