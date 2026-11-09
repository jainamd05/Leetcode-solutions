class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end()) ;
        sort(s.begin() , s.end()) ;

        int content_child = 0 , cookie_idx = 0 ;
        while (cookie_idx < s.size() && content_child < g.size()){
            if (s[cookie_idx] >= g[content_child]) content_child++ ;
            cookie_idx++ ;
        }

        return content_child ;
    }
};