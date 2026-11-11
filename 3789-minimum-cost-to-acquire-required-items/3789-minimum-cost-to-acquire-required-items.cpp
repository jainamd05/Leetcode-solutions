class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long A = (1LL*cost1*need1 + 1LL*cost2*need2) ;
        long long B = 1LL*max(need1, need2)*costBoth ;
        
        long long C = 1LL*min(need1, need2)*costBoth ;
        if (need1 > need2) {C += 1LL*(need1-need2)*cost1 ;}
        else {C += 1LL*(need2-need1)*cost2 ;}

        return min({A, B, C}) ;
    }
};