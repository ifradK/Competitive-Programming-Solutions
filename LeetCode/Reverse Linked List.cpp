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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            return head;
        }

        ListNode *prev=head;
        ListNode *curr=head->next;
        head->next=NULL;
        while(curr->next)
        {
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        curr->next=prev;
        return curr;
    }
};
