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
    ListNode* rotateRight(ListNode* head, int k) {
        int leng = 0;
        ListNode* i = head;
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        while (i->next != nullptr) {
            i = i->next;
            ++leng;
        } 
        if (k == leng+1) {
            return head;
        }
        if (k > leng) {
            k = k%(leng+1);
        }
        i->next = head;
        i = head;
        for (int _ = 0; _ < leng - k; ++_) {
            i = i->next;
        }
        head = i->next;
        i->next = nullptr;
        return head;

    }
};