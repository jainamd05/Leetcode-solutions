class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int ans = 0 ;
        set<pair<int, int>> reserved;
        for (auto &seat : reservedSeats) {
            reserved.insert({seat[0], seat[1]});
        }

        set<int> rows ;
        for (auto &seat : reservedSeats) {
            rows.insert(seat[0]);
        }

        // Empty rows
        ans += (n-rows.size())*2 ;

        for(int row: rows){
            bool left = true ; 
            bool middle = true ; 
            bool right = true ;

            for(int seat = 2 ; seat <= 5 ; seat++){
                if (reserved.count({row, seat})) left = false ;
            }

            for(int seat = 4 ; seat <= 7 ; seat++){
                if (reserved.count({row, seat})) middle = false ;
            }

            for(int seat = 6 ; seat <= 9 ; seat++){
                if (reserved.count({row, seat})) right = false ;
            }


            if (left && right) ans += 2 ;
            else if (left || middle || right) ans += 1 ;
        }

        return ans ;
    }
};