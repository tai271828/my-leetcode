/**
 *
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* second = dummy;
        for (int i=0; i < n; i++) {
            head = head->next;
        }

        while (head != NULL) {
            head = head->next;
            second = second->next;
        }

        second->next = second->next->next;

        return dummy->next;

    }
};
