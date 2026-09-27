class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long source_sum = 0 , target_sum = 0 ;

        for(int s : source) source_sum += s ;
        for(int t : target) target_sum += t ;
        
        if (source_sum == target_sum) return true ;
        return false ;
    }
};