class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size() ;
        int max_len = 0 ;

        int i = 1 ;
        while (i < n-1){
            // Is it peak or not !
            if ((arr[i] > arr[i-1]) && (arr[i] >  arr[i+1])){
                int left = i , right = i ;

                while ((left > 0) && (arr[left] > arr[left-1])) left-- ;
                while((right < n-1) && (arr[right] > arr[right+1])) right++ ;

                max_len = max(max_len , right-left+1) ;
                i = right ;
            }
            else i++ ;
        }
        return max_len ;
    }
};