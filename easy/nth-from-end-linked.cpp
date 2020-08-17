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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        
        //create a node to point to the head as a starting point for two pointers 'fast' and 'slow'
        ListNode *preNode = new ListNode;
        preNode -> next = head;

        //two pointers
        auto slow = preNode;
        auto fast = preNode;

        // put fast n nodes in front
        while (n > 0) {
            fast = fast->next;
            --n;
        }

        // When fast reaches the last valid node, 
        // slow will one before the nth to last node.
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        //delete the node after slow node
        auto node_to_delete = slow->next;
        slow->next = slow->next->next;
        delete node_to_delete;
        
        //return preNode->next in case the head node was deleted.
        return preNode->next;
    }
};
