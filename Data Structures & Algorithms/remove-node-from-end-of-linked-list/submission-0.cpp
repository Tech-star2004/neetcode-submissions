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
        ListNode* temp1 = head;
        ListNode* temp = head;
        int count = 0;
        while(temp1 != nullptr){
            temp1 = temp1->next;
            count++;
        }   
        int rn = count - n;
        if(rn == 0){
            head = head->next;
            return head;
        }
        else{
            for(int i = 0; i < rn - 1; i++){
                head = head->next;
            }
            head->next = head->next->next;
        }
        return temp;
    }
};
