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
    int pairSum(ListNode* head) {
        vector <int> nums ;
        ListNode* temp = head ;
        while (temp){
            nums.push_back(temp->val) ;
            temp = temp->next ;
        }
        
        int n = nums.size() ;
        int ans = -1 ;
        for(int i = 0 ; i < (n / 2) ; i++){
            ans = max(ans, nums[i] + nums[n-1-i]) ;
        }
        return ans ;
    }
};