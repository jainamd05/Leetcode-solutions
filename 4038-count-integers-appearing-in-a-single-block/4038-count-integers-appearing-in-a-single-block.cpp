class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int state[101] = {0} ;

        for (int i = 0 ; i < nums.size() ; i++){
            int x = nums[i] ;
            if (state[x] == 2) continue ;  // Not in continuity

            if (state[x] == 1){
                if (nums[i-1] != x) state[x] = 2 ;
            }

            else state[x] = 1 ;
        }

        int cnt = 0 ;
        for (int i = 0 ; i <= 100 ; i++){
            if (state[i] == 1) cnt++ ;
        }
        return cnt ;
    }
};