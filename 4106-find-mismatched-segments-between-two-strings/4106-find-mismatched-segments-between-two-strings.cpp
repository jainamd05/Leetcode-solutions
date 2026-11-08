class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans ;

        bool cont = false  ;
        string s_one = "" ;
        string s_two = "" ;
        for (int i = 0 ; i < s1.size() ; i++){
            if (s1[i] != s2[i]){
                s_one += s1[i] ;
                s_two += s2[i] ;
                cont = true ;
                continue ;
            }

            if (cont){
                vector<string> s = {s_one, s_two} ;
                ans.push_back(s) ;

                s_one = "" ; s_two = "" ;
                cont = false ;
            }
        }        
        if (cont){
            vector<string> s = {s_one, s_two} ;
            ans.push_back(s) ;
        }
        
        return ans ;
    }
};