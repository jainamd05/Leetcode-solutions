class Solution {
public:
    bool checkDivisibility(int n) {
        int digit_sum = 0 ; 
        int digit_product = 1 ;

        int x = n ;
        while (x > 0){
            digit_sum += x%10 ;
            digit_product *= x%10 ;
            x /= 10 ;
        }

        return (n%(digit_sum + digit_product) == 0) ;

    }
};