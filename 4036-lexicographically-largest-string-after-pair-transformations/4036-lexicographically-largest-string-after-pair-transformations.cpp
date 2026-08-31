class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector <string> ans ;
        
        for (int x : nums){
            char c = 'a' ;
            string val = "";
            while (x > 0){

                if (c == 'z'){
                    val.insert(val.begin(), x, 'z') ; 
                    break ;
                }
                if (x%2 == 1){
                    val.insert(val.begin(), c) ;
                }
                x /= 2 ;
                c++ ;
            }
            ans.push_back(val) ;            
        }
        return ans ;
    }
};