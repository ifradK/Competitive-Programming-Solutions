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
    bool hasCycle(ListNode *head) {
        map<ListNode*, int> mp;
        while(head!=NULL)
        {
            if(mp.find(head)!=mp.end()){return true;}
            mp[head]++;
            head = head->next;
        }
        return false;
    }
};



//FASTER APPROACH AND MORE MEMORY EFFICIENT

class Solution {
public:
    bool hasCycle(ListNode *head) {
        while(head!=NULL)
        {
            if(head->val == INT_MIN){return true;}
            head->val = INT_MIN;
            head = head->next;
        }
        return false;
    }
};
