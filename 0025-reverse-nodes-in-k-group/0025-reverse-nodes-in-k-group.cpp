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
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == nullptr || head -> next == nullptr || k == 1) return head ; 

        ListNode* dummy = new ListNode (-1) ; 
        ListNode* last_prev2 = head ; 
        dummy -> next = head ; 
        ListNode* last_prev =  dummy ; 
        ListNode* prev      =  nullptr ; 
        ListNode* curr      =  head ;
        ListNode* nextt     =  head ;
        ListNode* next      =  head -> next ;
        
        int count = 0 ; 
        int count2 = 0 ;  
        bool bkl = false  ;
        bool mkc = true ; 

        while (nextt != nullptr ){
            nextt = nextt -> next; 
            count++ ; 
        }
            
        int x = count ; 

        while (curr != nullptr && x >= k){  
            last_prev2 = curr; 
            prev = nullptr;    
            count2 = 0;

            while (count2 < k && curr != nullptr) {
                next = curr -> next ; 
                curr -> next = prev ; 
                prev = curr ; 
                curr = next ; 
                x--;
                count2++ ; 
            }

            if (mkc) {
                dummy -> next = prev ;
                mkc = false ; 
            } else {
                last_prev -> next = prev ; 
            }

            last_prev = last_prev2; 
        }

    
        last_prev -> next = curr; 

        ListNode* result = dummy -> next;
        delete dummy; 
        return result;
    }
};