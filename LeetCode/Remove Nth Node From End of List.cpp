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
        int len = getLength(head);
        ListNode* ans = removeNode(head, len-n+1, len);

        return ans;
    }

    int getLength(ListNode* head)
    {
        int cnt=0;
        while(head->next){head = head->next; cnt++;}
        if(head){cnt++;}
        return cnt;
    }

    ListNode* removeNode(ListNode* head, int n, int len)
    {
        int cnt=0;
        ListNode* head2 = head;
        ListNode* prev;
        while(1)
        {
            cnt++;
            if(cnt==n){break;}
            prev = head;
            head = head->next;
        }
        if(n==1){head2 = head->next;}
        else if(n==len){prev->next = NULL;}
        else{prev->next = head->next;}
        return head2;
    }
};
