class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int sx = source[0], sy = source[1] ;
        int tx = target[0], ty = target[1] ;

        if ((sx == tx) && (sy == ty)) return 0 ;
        // Same row / column / diagonal
        if ((sy == ty) || (sx == tx) || (abs(sx-tx) == abs(sy-ty))) return 1 ;

        return 2 ;
    }
};