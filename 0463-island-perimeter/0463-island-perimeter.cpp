class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size() ;
        int island = 0, neighbours = 0;

        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < m ; j++){

                // for island
                if (grid[i][j] == 1){
                    island++ ;
                    if (i < n-1 && grid[i + 1][j] == 1) neighbours++; // count down neighbours
                    if (j < m-1 && grid[i][j + 1] == 1) neighbours++; // count right neighbours
                }

            }
        }

        return island*4 - neighbours*2 ;
    }
};