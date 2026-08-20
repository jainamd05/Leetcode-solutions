class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1 ;
        vector <int> arr2 ;

        arr1.push_back(nums[0]) ;
        arr2.push_back(nums[1]) ;
        int arr1_last = 0 ; 
        int arr2_last = 0 ;
        for (int i = 2 ; i < nums.size() ; i++){
            if (arr1[arr1_last] > arr2[arr2_last]){
                arr1.push_back(nums[i]) ;
                arr1_last++ ;
            }
            else {
                arr2.push_back(nums[i]) ;
                arr2_last++ ;
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1 ;
    }
};