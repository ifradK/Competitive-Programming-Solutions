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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1==NULL){return list2;}
        if(list2==NULL){return list1;}

        ListNode* list = list1;
        if(list1->val > list2->val)
        {
            list = list2;
            list2 = list2->next;
        }
        else
        {
            list1 = list1->next;
        }

        ListNode* final_list = list;
        while(list1 && list2)
        {
            if(list1->val <= list2->val)
            {
                final_list->next = list1;
                list1 = list1->next;
            }
            else if(list1->val > list2->val)
            {
                final_list->next = list2;
                list2 = list2->next;
            }
            final_list = final_list->next;
        }

        if(!list1){final_list->next = list2;}
        if(!list2){final_list->next = list1;}

        return list;
    }
};
