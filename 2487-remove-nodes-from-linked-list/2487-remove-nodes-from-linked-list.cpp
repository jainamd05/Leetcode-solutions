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
    ListNode* removeNodes(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        // Recursively process the right side
        head->next = removeNodes(head->next);

        // If the next node is greater, remove current node
        if (head->next->val > head->val)
            return head->next;

        return head;
    }
};