class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans = 0 ;
        unordered_map<int, vector<int>> pos ;

        for (int i = 0 ; i < nums.size() ; i++){
            pos[nums[i]].push_back(i) ;
        }

        for(auto [num, idx] : pos){
            if (idx.size() == 3){
                if (idx[2]-idx[1] == idx[1]-idx[0]) ans++ ;
            }
        }

        return ans ;
    }
};