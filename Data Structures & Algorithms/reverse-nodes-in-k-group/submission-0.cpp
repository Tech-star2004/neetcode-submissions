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
        if(head == nullptr || k == 1) return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* pgt = &dummy;
        while(true){
            ListNode* knode = pgt;
            for(int i = 0; i < k && knode != nullptr; i++){
                knode = knode->next;
            }
            if(knode == nullptr) break;
            ListNode* grph = pgt->next;
            ListNode* nexgrph = knode->next;
            ListNode* curr = grph;
            ListNode* prev = nexgrph;
            for(int i = 0; i < k; i++){
                ListNode* nex = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nex;
            }
            pgt->next = prev;
            pgt = grph;
        }
        return dummy.next;
    }
};
