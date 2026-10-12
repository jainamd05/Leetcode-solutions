/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr ;
        ListNode* temp = head ;
        while(temp){
            arr.push_back(temp->val) ;
            temp = temp->next ;
        }

        int n = arr.size() ;
        stack <int> st ;
        vector<int> ans(n) ;

        for (int i = 0 ; i < n ; i++){
            while (!st.empty() && arr[st.top()] < arr[i]){
                int small = st.top() ;
                st.pop() ;
                ans[small] = arr[i] ;
            }
            st.push(i) ;
        }
        return ans ;
    }
};