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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallDummy = new ListNode(0) ;
        ListNode* highDummy = new ListNode(0) ;

        ListNode* small = smallDummy;
        ListNode* high = highDummy;

        ListNode* temp = head ;
        while(temp){
            if (temp->val < x){
                small->next = temp ;
                small = small->next ;
            }
            else{
                high->next = temp ;
                high = high->next ;
            }
            temp = temp->next ;
        }

        high->next = nullptr ;
        small->next = highDummy->next ;
        return smallDummy->next ;
    }
};