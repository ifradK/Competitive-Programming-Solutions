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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return solve(lists);
    }

    ListNode* solve(vector<ListNode*>& lists)
    {
        ListNode* final_head = NULL;

        int mn=INT_MAX,pos;
        bool flag=false;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i]!=NULL && lists[i]->val < mn)
            {
                mn = lists[i]->val;
                final_head = lists[i];
                pos=i;
                flag=true;
            }
        }
        if(flag){lists[pos] = lists[pos]->next;}

        ListNode* temp = final_head;
        while(1)
        {
            int cnt=0;
            for(int i=0;i<lists.size();i++){if(lists[i]){cnt++;}}
            if(cnt<2){break;}
            else
            {
                int mn=INT_MAX,pos;
                bool flag=false;
                for(int i=0;i<lists.size();i++)
                {
                    if(lists[i]!=NULL && lists[i]->val < mn)
                    {
                        mn = lists[i]->val;
                        temp->next = lists[i];
                        pos=i;
                        flag=true;
                    }
                }
                if(flag)
                {
                    lists[pos] = lists[pos]->next;
                    temp = temp->next;
                }
            }
        }
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i])
            {
                temp->next = lists[i];
                break;
            }
        }

        return final_head;
    }
};
