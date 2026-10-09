class Solution {
public:
    int minInsertions(string s) {
        // int open = 0 , close = 0 ;

        // for (char ch : s){
        //     if (ch == '(') open++ ;
        //     else close++ ;
        // }

        // return abs(open*2 - close) ;
        int open = 0 ;
        int in = 0 ;

        for (int i = 0 ; i < s.size() ; i++){
            if (s[i] == '(') open++ ;
            else{
                if (i+1 < s.size() && s[i+1] == ')') i++ ;
                else in++ ;

                if (open > 0) open-- ;
                else in++ ;
            }
        }

        return (in + 2*open) ;
    }
};