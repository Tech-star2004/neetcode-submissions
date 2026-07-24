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
private:
   struct compare{
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val;
        }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> minheap;
        for(ListNode* listheads : lists){
            minheap.push(listheads);
        }
        ListNode dummy(0);
        ListNode* temp = &dummy;
        while(!minheap.empty()){
            ListNode* minnode = minheap.top();
            minheap.pop();
            temp->next = minnode;
            temp = temp->next;
            if(minnode->next != nullptr){
                minheap.push(minnode->next);
            }
        }
        return dummy.next;
    }
};
