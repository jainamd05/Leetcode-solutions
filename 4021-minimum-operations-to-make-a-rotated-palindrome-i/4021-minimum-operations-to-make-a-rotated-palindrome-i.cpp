class Solution {
public:
    int minOperations(string s) {
        int n = s.length() ;
        int ans = 10000000 ;

        for (int i = 0 ; i < n ; i++){
            int curr = i ;

            for (int j = 0 ; j < n/2 ; j++){
                char l = s[(i+j)%n] ;
                char r = s[(i + (n-1)-j)%n] ;

                int diff = abs(l-r) ;
                curr += min(diff, 26-diff) ;
            }
        ans = min(ans, curr) ;
        }
        return ans ;
    }
};