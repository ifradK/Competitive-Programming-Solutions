/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        while(head!=NULL)
        {
            if(head->val == INT_MIN){return head;}
            head->val = INT_MIN;
            head = head->next;
        }
        return NULL;
    }
};


