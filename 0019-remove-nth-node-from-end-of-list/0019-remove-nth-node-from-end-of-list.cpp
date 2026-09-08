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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* counter = head;
        while (counter != nullptr) {
            ++count;
            counter = counter->next;
        }
        counter = head;
        for (int i = 0; i < count-n-1; ++i) {
            counter = counter->next;
        }
        if (n == count) {
            head = head->next;
        } else if (n == 1) {
            counter->next = nullptr;
        } else {
            counter->next = ((counter->next)->next);
        }
        return head;




    }
};