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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode hh(head->val-1);
        ListNode *p=&hh,*q=head;
        while(q!=NULL)
        {
            if(q->val==p->val)
            {
                q=q->next;
            }
            else
            {
                p->next=q;
                p=q;
                q=q->next;
            }
            p->next=NULL;
        }
        return hh.next;
    }
};
