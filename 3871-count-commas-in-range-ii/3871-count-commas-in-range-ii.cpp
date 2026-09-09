class Solution {
public:
    long long countCommas(long long n) {
        long long com_space = 1000, ans = 0 ;

        while (com_space <= n){
            ans += (n - com_space + 1) ;
            com_space *= 1000 ;
        }

        return ans ;
    }
};