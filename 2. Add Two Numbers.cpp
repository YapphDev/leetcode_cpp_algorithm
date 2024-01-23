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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *cur1 = NULL, *cur2 = NULL;
        int length1 = 0, length2 = 0;
        for (cur1 = l1; cur1; cur1 = cur1->next)
        {   
            length1++;
        }
        for (cur2 = l2; cur2; cur2 = cur2->next)
        {   
            length2++;
        }
        ListNode *result = NULL;
        int plus = 0, length = 0;
        if (length1 > length2)
            length = length1;
        else
            length = length2;
        cur1 = l1;
        cur2 = l2;
        for(int j = length ; j >0 ; j--)
        {   
            if ((cur1->val + cur2->val + plus) >= 10)
            {
                result = new ListNode(cur1->val + cur2->val + plus - 10 , result);
                plus = 1;
            }
            else
            {
                result = new ListNode(cur1->val + cur2->val + plus , result);
                plus = 0;
            }
            if (j == 1 && plus == 1)
                result = new ListNode(1, result);
            if(cur1->next)
                cur1 = cur1->next;
            else
                 cur1 = new ListNode(0,nullptr);
            if(cur2->next)
                cur2 = cur2->next;
             else
                 cur2 = new ListNode(0,nullptr);

        }
        ListNode *result1 = NULL;
        for (cur1 = result; cur1; cur1->next)
            result1 = new ListNode (cur1->val,result1);

    return result1;
    }
};
