class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0 ; 
        int white = 0 ;
        int blue = 0 ;
        for (int x: nums){
            if (x==0) red += 1 ;
            else if(x==1) white += 1 ;
            else blue += 1 ;
        }

        for (int i = 0 ; i < red ; i++) nums[i] = 0 ;
        for (int j = 0 ; j < white ; j++) nums[j+red] = 1 ;
        for (int k = 0 ; k < blue ; k++) nums[k+red+white] = 2 ;
    }
};