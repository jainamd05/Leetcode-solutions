class Solution {
public:
    int distance(int xs, int ys, int xe, int ye){
        int dist = abs(xs-xe) + abs(ys-ye) ;
        return dist ;
    }
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int min_distance = 1000 ;
        int ans = -1 ;
        for (int i = 0 ; i < drones.size() ; i++){
            int value = distance(drones[i][0], drones[i][1], target[0], target[1]) ;
            if (value <= drones[i][2]){
                if (value < min_distance){
                    min_distance = value ;
                    ans = i ;
                }
            }
        }
        return ans ;
    }
};