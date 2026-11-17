class Solution {
public:
    int maxScore(vector<int>& parent, vector<int>& op, vector<int>& score) {
        int n = parent.size() ;
        if (n == 1) return score[0] ;

        // creating a tree
        vector<vector<int>> tree(n) ;
        for (int i = 1 ; i < n ; i++) tree[parent[i]].push_back(i) ;

        vector<int> order ;
        stack<int> st ;

        st.push(0) ;
        while(!st.empty()){
            int node = st.top() ;
            st.pop() ;

            order.push_back(node) ;
            for(int i : tree[node]) st.push(i) ;
        }

        
        vector<long long> dp(n, 0) ;
        for (int i = n-1 ; i >= 0 ; i--){
            int node = order[i] ;

            // Leaf node
            if (tree[node].empty()){
                dp[node] = score[node] ; continue ;
            }

            long long total = score[node];
            long long minChild = LLONG_MAX;

            // Calculate total and minimum child DP
            for (int i : tree[node]) {
                total += dp[i];
                minChild = min(minChild, dp[i]);
            }

            // operation 0
            if (op[node] == 0) dp[node] = total - min(0LL, minChild) ;
            else dp[node] = total - minChild ; 
        }

        return dp[0] ;
    }
};