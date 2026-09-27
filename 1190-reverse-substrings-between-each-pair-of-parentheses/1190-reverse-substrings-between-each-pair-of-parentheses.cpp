class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> rev ;
        string ans ;

        for (char ch : s){
            if (ch == '(') rev.push(ans.length()) ;
            else if (ch == ')') {
                int top = rev.top() ;
                rev.pop() ;
                reverse(ans.begin() + top, ans.end()) ;
            }
            else ans += ch ;
        }
        return ans ;
    }
};