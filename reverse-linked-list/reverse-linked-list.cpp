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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        while(head != NULL){
            ListNode *t = head->next;
            head->next = prev;
            prev = head;
            head = t;
        }
        return prev;
    }
};

// null is prev
// 1 is head
// 2 next of head