/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 
 *     ListNode(int x) 
        : val(x), next(nullptr) {}
        
 *     ListNode(int x, ListNode *next) 
        : val(x), next(next) {}
 * };
 */
class Solution {
public:
    //recursive function
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2, int carryNum)
    {
        //always include a case is the Node / Nodes are null.
        if (l1 == nullptr && l2 == nullptr && carryNum == 0)
        {
            return nullptr;
        }

        //this listNode will be the answer we return.
        ListNode *ans = new ListNode();

        int addResult = carryNum;

        if (l1 != nullptr)
        {
            addResult += l1->val;
        }
        if (l2 != nullptr)
        {
            addResult += l2->val;
        }

        //add the ones place to the result list, will handle if it is greater than 10 in the recursive call.
        ans->val = addResult % 10;

        //RECURSIVE
        if (l1 != nullptr || l2 != nullptr)
        {
            ListNode *nextPlace = addTwoNumbers(l1 == nullptr ? nullptr : l1->next,
                                                l2 == nullptr ? nullptr : l2->next,
                                                addResult >= 10 ? 1 : 0);

            ans->next = nextPlace;
        }
        return ans;
    }

    //call recursive function with carryNum counter set to 0
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        return addTwoNumbers(l1, l2, 0);
    }
};
