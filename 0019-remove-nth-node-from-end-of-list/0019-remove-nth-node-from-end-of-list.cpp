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
    int length_of_ll(ListNode* head){
        ListNode* temp = head ;
        int len = 0 ;
        while (temp){
            temp = temp->next ;
            len++ ;
        }
        return len ;
    }

    ListNode* delete_node(ListNode* head , int pos){
        ListNode* temp = head ;

        if (pos == 1){
            head = head->next ;
            delete temp ;
            return head ;
        }

        int idx = 1 ;
        while(pos-1 > idx){
            idx++ ;
            temp = temp->next ;
        }

        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;

        delete toDelete;
        return head;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length_of_ll(head) ;
        
        head = delete_node(head, (len-n+1)) ;
        return head ;
    }
};