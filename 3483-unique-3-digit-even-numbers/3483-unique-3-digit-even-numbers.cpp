class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {0} ;
        int counts = 0 ;

        for (int d : digits) freq[d]++ ;

        for(int i = 1 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                for(int k = 0 ; k < 9 ; k += 2)

                    counts += (freq[i]>0 && freq[j]>(i==j) && freq[k]>(i==k)+(j==k)) ;
            }
        }
        return counts ;
    }
};