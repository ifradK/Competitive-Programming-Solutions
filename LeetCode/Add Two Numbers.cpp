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

        ListNode* ans = l1;
        ListNode* ans1 = ans;
        ListNode* last;
        int add = 0, rem;
        while(l1 && l2)
        {
            last = ans;
            int temp = l1->val + l2->val + add;
            rem = temp%10;
            add = temp/10;
            ans->val = rem;
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            last = ans;
            int temp = l1->val + add;
            rem = temp%10;
            add = temp/10;
            ans->val = rem;
            ans = ans->next;
            l1 = l1->next;
        }
        ans = last;
        bool flag=false;
        while(l2)
        {
            last = ans;
            int temp = l2->val + add;
            rem = temp%10;
            add = temp/10;
            ans->next = new ListNode(rem);
            ans = ans->next;
            l2 = l2->next;
            flag=true;
        }
        if(flag && add>0){ans->next = new ListNode(add);}
        else if(add>0){last->next = new ListNode(add);}
        return ans1;
    }
};
