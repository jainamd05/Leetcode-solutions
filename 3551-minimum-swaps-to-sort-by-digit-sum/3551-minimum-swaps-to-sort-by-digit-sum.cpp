class Solution {
public:
    int sum_of_num(int n) {
        int val = 0;
        while (n) {
            val += n % 10;
            n /= 10;
        }
        return val;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end(), [&](auto a, auto b) {
            int sa = sum_of_num(a.first);
            int sb = sum_of_num(b.first);

            if (sa != sb)
                return sa < sb;

            return a.first < b.first;
        });

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || arr[i].second == i)
                continue;

            int cycleSize = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true ;
                j = arr[j].second ;
                cycleSize++;
            }

            swaps += cycleSize - 1;
        }

        return swaps ;
    }
};