class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans = 0 ;
        unordered_map<int, vector<int>> pos ;

        for (int i = 0 ; i < nums.size() ; i++){
            pos[nums[i]].push_back(i) ;
        }

        for(auto [num, idx] : pos){
            if (idx.size() < 3) continue ;
            
            int diff = idx[1] - idx[0] ;
            bool unique = true ;
            for(int i = 2 ; i < idx.size() ; i++){
                if ((idx[i] - idx[i-1]) != diff){
                    unique = false ;
                    break ;
                }
            }
            if (unique) ans++ ;
        }

        return ans ;
    }
};