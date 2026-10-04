class Solution {
public:
    int rotate(int a, int b){
        int val = abs(a-b) ;
        return min(val, 10-val) ;
    }
    
    int minRotations(int n, string s) {

        // Finding total sum
        int total = rotate(0, s[0] - '0') ;
        for (int i = 1 ; i < n ; i++)
            total += rotate(s[i-1]-'0' , s[i]-'0') ;

        int ans = total ;
        // Reversing now !
        for (int k = 0 ; k < n ; k++){
            int old_value, new_value ;

            if (k == 0){
                old_value = rotate(0, s[0]-'0') ;
                new_value = rotate(0, s[n-1] - '0') ;
            }
            else {
                old_value = rotate(s[k-1] - '0' , s[k] - '0') ;
                new_value = rotate(s[k-1] - '0' , s[n-1] - '0') ;
            }
            ans = min(ans, total - old_value + new_value) ;
        }
        return ans ;
    }
};