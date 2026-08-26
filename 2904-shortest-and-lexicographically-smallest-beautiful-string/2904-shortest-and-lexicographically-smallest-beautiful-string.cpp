class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        if ((count(s.begin(), s.end(), '1')) < k) return "" ;

        string ans = s ;
        int cnt = 0 ;
        int left = 0 ;
        for (int right = 0 ; right < s.length() ; right++){
            cnt += s[right] - '0' ;

            while (cnt > k || s[left] == '0'){
                cnt -= s[left] - '0' ;
                left++ ;
            }

            if (cnt == k){
                string sub_s = s.substr(left, right - left + 1) ;
                if (sub_s.length() < ans.length() || sub_s.length() == ans.length() && sub_s < ans){
                    ans = sub_s ;
                }
            }
        }
        return ans ;
    }
};