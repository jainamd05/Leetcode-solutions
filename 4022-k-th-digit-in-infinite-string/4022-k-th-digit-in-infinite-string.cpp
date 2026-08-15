#include <cmath>
class Solution {
public:    
    bool digit(long long k , int i){
        long long count = 9LL * (i + 1) * pow(10, i);
        return k <= count ;
    }
    
    int kthDigit(long long k) {
        if (k <= 9) return k ;
        k -= 9 ;

        int i = 1 ;
        while (!digit(k, i)) {
            k -= 9LL * (i + 1) * pow(10, i);
            i++;
        }

        long long block = 10*(i+1) ;
        long long block_index = (k-1)/block ;

        // Finding actual block
        long long b = block_index + pow(10, i-1) ;
        long long position_in_b = (k-1)%block ;

        long long num_index = position_in_b/(i+1) ;

        // now find num
        long long num ;
        if (b%2 == 0) num = 10*b + num_index ;
        else num = 10*b + (9-num_index) ;

        // digit inside num
        long long digit_index = position_in_b%(i+1) ;
        string s = to_string(num) ;

        return s[digit_index] - '0' ;
    }
};