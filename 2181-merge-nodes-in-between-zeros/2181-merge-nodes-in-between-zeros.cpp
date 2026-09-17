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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> arr ;
        ListNode* temp = head ;
        int sum = 0 ;
        while (temp){
            int val = temp->val ;
            sum += val ;
            if (val == 0){
                if (sum != 0) arr.push_back(sum) ;
                sum = 0 ;
            }
            temp = temp->next ;
        }

        ListNode* newHead = new ListNode(arr[0]) ;
        ListNode* temp2 = newHead ;
        for (int i = 1 ; i < arr.size() ; i++){
            temp2->next = new ListNode(arr[i]) ;
            temp2 = temp2->next ;
        }
        return newHead ;
    }
};