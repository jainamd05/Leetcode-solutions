class Solution {
public:
    int maxDepth(string s) {
        int depth = 0 ;
        int largest = 0 ;

        for (char i : s){
            if (i == '('){
                depth++ ;
                largest = max(largest, depth) ;
            }
            else if (i == ')') depth-- ;
        }
        
        return largest ;
    }
};