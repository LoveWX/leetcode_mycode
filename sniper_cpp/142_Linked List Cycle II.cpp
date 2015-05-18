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
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *p=head,*q=head,*t;
        while(q!=NULL)
        {
            p=p->next;
            q=q->next;
            if(q==NULL)
            {
                return NULL;
            }
            q=q->next;
            if(p==q)
            {
                break;
            }
        }
        if(q==NULL)
        {
            return NULL;
        }
        p=p->next;
        t=p;
        q->next=NULL;
        q=head;
        while(p!=q)
        {
            p=p->next;
            if(p==NULL)
            {
                p=head;
            }
            q=q->next;
            if(q==NULL)
            {
                q=t;
            }
        }
        return p;
    }
};
