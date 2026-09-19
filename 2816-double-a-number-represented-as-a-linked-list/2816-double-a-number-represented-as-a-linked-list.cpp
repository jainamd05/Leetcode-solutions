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

    // ListNode* insert_at_front(ListNode* head, int data){
    //     ListNode* newNode = new ListNode(data, head) ;
    //     return newNode ;
    // }

    ListNode* doubleIt(ListNode* head) {
        // vector<int> number ;
        // ListNode* temp = head ;
        // while (temp){
        //     number.push_back(temp->val) ;
        //     temp = temp->next ;
        // }

        // long long num = 0 ;
        // for (int i = 0 ; i < number.size() ; i++){
        //     num += number[i]*(pow(10, number.size()-i-1)) ;
        // }

        // num *= 2 ;

        // if (num == 0) return new ListNode(0);

        // ListNode* newHead = nullptr ;
        // while (num>0){
        //     int digit = num%10 ;
        //     num = num/10 ;
        //     newHead = insert_at_front(newHead, digit) ;
        // }
        // return newHead ;

        vector<int> carry ;
        ListNode* temp = head ;
        while (temp){
            int value = temp->val * 2 ;

            temp->val = value % 10 ;
            carry.push_back(value / 10) ;

            temp = temp->next ;
        }

        temp = head ;
        int i = 1 ;
        while (temp->next != nullptr){
            temp->val += carry[i] ;
            i++ ;
            temp = temp->next ;
        }

        if (carry[0] == 1){
            ListNode* newNode = new ListNode(1, head) ;
            head = newNode ; 
        }

        return head ;
    }
};