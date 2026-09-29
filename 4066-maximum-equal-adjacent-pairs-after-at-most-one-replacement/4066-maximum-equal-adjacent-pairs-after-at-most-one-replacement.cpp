class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n = nums.size() ;

        int equal = 0 ;

        map<pair<int, int>, int> freq ;
        for (int i = 0 ; i < n-1 ; i++){
            if (nums[i] == nums[i+1]) equal++ ;

            else{
                int x = nums[i] ;
                int y = nums[i+1] ;
                if (x > y) swap(x,y) ;

                freq[{x, y}]++ ;
            }
        }
        int replace = 0 ;
        for(auto [pair, cnt]: freq){
            replace = max(replace, cnt) ;
        }

        return equal+replace ;
    }
};