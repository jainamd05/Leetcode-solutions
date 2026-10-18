class Solution {
public:
    pair<int, int> R(int x, int y) {return {x, y+1} ;}
    pair<int, int> L(int x, int y) {return {x, y-1} ;}
    pair<int, int> U(int x, int y) {return {x-1, y} ;}
    pair<int, int> D(int x, int y) {return {x+1, y} ;}

    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size() , n = grid[0].size() ;
        vector<vector<bool>> g(m, vector<bool>(n, false));

        int ox = 0 , oy = 0 ;
        int x = 0 , y = 0 ;
        while (true){

            if (x < 0 || y < 0 || x >= m || y >= n) break ;
            
            if (g[x][y]) break ;

            else {
                ox = x ; oy = y ;
                g[x][y] = true ;

                if (grid[x][y] == 'R') y++ ;
                else if (grid[x][y] == 'L') y-- ;
                else if (grid[x][y] == 'U') x-- ;
                else if (grid[x][y] == 'D') x++ ;
            }
        }
        return {ox, oy};
    }
};