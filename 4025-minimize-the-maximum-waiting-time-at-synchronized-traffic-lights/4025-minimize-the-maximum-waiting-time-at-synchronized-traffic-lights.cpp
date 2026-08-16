class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int max_green_time = *max_element(lights.begin(), lights.end()) ;

        int ans = 0 ;
        for (int time : arrivalTime){
            int remaining_time = time%period ;
            int waiting_time = 0 ;
            
            if (remaining_time < max_green_time) waiting_time = 0 ;
            else waiting_time = period - remaining_time ;

            ans = max(ans, waiting_time) ;
        }
        return ans ;
    }
};