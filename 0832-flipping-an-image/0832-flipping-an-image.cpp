class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image[0].size() ;
        for (vector <int>& row : image){
            for (int i = 0 ; i < (n+1)/2 ; i++){
                int temp = row[i] ^ 1;
                row[i] = row[n-i-1] ^ 1;
                row[n-i-1] = temp;
            }
        }
        return image ;
    }
};