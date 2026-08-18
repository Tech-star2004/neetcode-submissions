/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        Node* curr = head;
        while(curr != nullptr){
            Node* newnode = new Node(curr->val);
            Node* nex = curr->next;
            curr->next = newnode;
            newnode->next = nex;
            curr = nex;
        }
        curr = head;
        while(curr != nullptr){
            curr->next->random = curr->random ? curr->random->next : nullptr;
            curr = curr->next->next;
        }
        Node* clndhd = head->next;
        Node* clndcurr = clndhd;
        curr = head;
        while(curr != nullptr){
            curr->next = curr->next->next;
            if(clndcurr->next != nullptr) clndcurr->next = clndcurr->next->next;
            curr = curr->next;
            clndcurr = clndcurr->next;
        }
        return clndhd;
    }
};
