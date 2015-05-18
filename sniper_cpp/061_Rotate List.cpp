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
    ListNode* rotateRight(ListNode* head, int k)
    {
        ListNode *p=head,*q;
        int len=0;
        while(p!=NULL)
        {
            len++;
            p=p->next;
        }
        if(len==0)
        {
            return NULL;
        }
        k%=len;
        if(k==0)
        {
            return head;
        }
        ListNode hh(0);
        hh.next=head;
        p=&hh;
        q=&hh;
        while(k--)
        {
            q=q->next;
        }
        while(q->next!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        q->next=hh.next;
        hh.next=p->next;
        p->next=NULL;
        return hh.next;
    }
};
