/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

map<ListNode*, int> mp;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        getToTail(headA);
        ListNode* ans = findIntersection(headB);
        return ans;
    }

    void getToTail(ListNode* head)
    {
        ListNode* tail = head;
        mp[tail]++;
        while(tail->next)
        {
            tail = tail->next;
            mp[tail]++;
        }
    }

    ListNode* findIntersection(ListNode* head)
    {
        ListNode* tail = head;
        if(mp.find(tail)!=mp.end()){return tail;}

        while(tail->next)
        {
            tail = tail->next;
            if(mp.find(tail)!=mp.end()){return tail;}
        }
        return NULL;
    }
};


//ANOTHER APPROACH

/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getToTail(headA);
        int lenB = getToTail(headB);

        if(lenA>lenB)
        {
            int temp = lenA-lenB;
            while(temp--)
            {
                if(headA->next){headA = headA->next;}
            }
        }
        else if(lenA<lenB)
        {
            int temp = lenB-lenA;
            while(temp--)
            {
                if(headB->next){headB = headB->next;}
            }
        }

        return solve(headA,headB);
    }

    int getToTail(ListNode* head)
    {
        int cnt = 0;
        while(head->next){head = head->next; cnt++;}
        return cnt;
    }

    ListNode* solve(ListNode *headA, ListNode *headB)
    {
        while(1)
        {
            if(headA != headB)
            {
                if(headA->next && headB->next)
                {
                    headA = headA->next;
                    headB = headB->next;
                }
                else{return NULL;}
            }
            else{return headA;}
        }
        return NULL;
    }
};
*/
