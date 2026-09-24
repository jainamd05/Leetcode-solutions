class Solution {
public:
    int summation(int num){
        int n = num ;
        int sum_of_num = 0 ;
        while(n > 0){
            sum_of_num += (n%10) ;
            n /= 10 ;
        }
        return sum_of_num ;
    }
    int smallestIndex(vector<int>& nums) {
        // int min_val = 10000 ;
        // int idx = -1 ;
        // for (int i = 0 ; i < nums.size() ; i++){
        //     if (nums[i] < 10 && nums[i] == i){
        //         if (min_val > nums[i]){
        //             min_val = nums[i] ;
        //             idx = i ;
        //         }
        //     }

        //     int val = summation(nums[i]) ;
        //     if (val == i && min_val > val){
        //         min_val = nums[i] ;
        //         idx = i ;                
        //     }
        // }

        // return idx ;
        int value = 10000 ;
        int idx = -1 ;

        for(int i = 0 ; i < nums.size() ; i++){
            int val = summation(nums[i]) ;
            if (val == i) return i ;
        }
        return -1 ;
    }
};