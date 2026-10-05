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
    ListNode* middleNode(ListNode* head) {
        int n = 0 ;
        ListNode* temp = head ;
        while (temp){
            n++ ;
            temp = temp->next ;
        }

        // if (n%2 == 0) n = n/2 ;
        // else n = n/2

        int i = 0 ;
        temp = head ;
        while (i != n/2){
            temp = temp->next ;
            i++ ;
        }
        return temp ;
    }
};