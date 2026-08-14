class Solution {
public:
    int maximumLengthSubstring(string s) {
        array <int, 26> cnt ;
        int left = 0 ;
        int ans = 0 ;

        for (int i = 0 ; i < s.length() ; i++){
            int c = s[i] - 'a' ;
            cnt[c]++ ;

            while (cnt[c] > 2){
                int d = s[left] - 'a';
                cnt[d]-- ;
                left++ ;
            }
            ans = max(ans, i-left+1);
        }
        return ans ;
    }
};