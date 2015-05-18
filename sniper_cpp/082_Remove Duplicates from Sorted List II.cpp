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
        ListNode hh(0);
        ListNode *p=&hh,*q=head,*t;
        while(q!=NULL)
        {
            for(t=q->next;t!=NULL&&t->val==q->val;t=t->next);
            if(q->next==t)
            {
                p->next=q;
                p=p->next;
            }
            q=t;
        }
        p->next=NULL;
        return hh.next;
    }
};
