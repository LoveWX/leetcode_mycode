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
    ListNode* sortList(ListNode* head)
    {
        int len=0;
        for(ListNode *p=head;p!=NULL;p=p->next,len++);
        return sortNode(head,len);
    }
    ListNode* sortNode(ListNode *head,int len)
    {
        if(len==0)
        {
            return NULL;
        }
        if(len==1)
        {
            return head;
        }
        ListNode hh(0);
        hh.next=head;
        ListNode *p=&hh,*q,*t;
        int i;
        for(i=0;i<len/2;i++,p=p->next);
        q=sortNode(p->next,len-i);
        p->next=NULL;
        p=sortNode(head,i);
        hh.next=NULL;
        t=&hh;
        while(p!=NULL&&q!=NULL)
        {
            if(p->val<=q->val)
            {
                t->next=p;
                p=p->next;
            }
            else
            {
                t->next=q;
                q=q->next;
            }
            t=t->next;
        }
        if(p!=NULL)
        {
            t->next=p;
        }
        else
        {
            t->next=q;
        }
        return hh.next;
    }
};
