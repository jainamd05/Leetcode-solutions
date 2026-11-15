class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;

        // int cnt = 0 ;
        // for (int l = 0 ; l < arr.size() ; l++){
        //     int sum = 0 ;
        //     for (int r = l ; r < arr.size() ; r++){
        //         sum += arr[r] ;

        //         if (sum%2 != 0) cnt++ ;
        //     }
        // }
        // return cnt%MOD ;
        long long cnt = 0 ;
        int prefixSum = 0 ;
        int odd_cnt = 0 , even_cnt = 1 ;

        for (int num : arr){
            prefixSum += num ;

            if (prefixSum%2 == 0){
                cnt += odd_cnt ;
                even_cnt++ ;
            }
            else {
                cnt += even_cnt ;
                odd_cnt++ ;
            }
        }
        return cnt%MOD ;
    }
};