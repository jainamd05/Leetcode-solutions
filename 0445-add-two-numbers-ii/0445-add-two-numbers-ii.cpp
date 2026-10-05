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

vector<int> addNumbers(vector<int>& a, vector<int>& b) {

    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    vector<int> result;

    while (i >= 0 || j >= 0 || carry) {

        int sum = carry;

        if (i >= 0)
            sum += a[i--];

        if (j >= 0)
            sum += b[j--];

        result.push_back(sum % 10);
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());

    return result;
}

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = l1 ;

        vector <int> a ;
        while(temp){
            a.push_back(temp->val) ;
            temp = temp->next ;
        }

        temp = l2 ;

        vector <int> b ;
        while(temp){
            b.push_back(temp->val) ;
            temp = temp->next ;
        }

        vector <int> summation = addNumbers(a, b) ;
        ListNode* head = new ListNode(summation[0]) ;

        temp = head ;
        for (int i = 1 ; i < summation.size() ; i++){
            temp->next = new ListNode(summation[i]) ;
            temp = temp->next ;
        }
        return head ;
    }
};