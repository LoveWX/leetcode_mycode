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
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        int i;
        ListNode hh(0);
        hh.next=head;
        ListNode *p=&hh,*q,*t;
        while(1)
        {
            for(i=0,q=p;i<k&&q!=NULL;i++,q=q->next);
            if(q==NULL)
            {
                break;
            }
            t=p->next;
            reverseNodes(p,q->next);
            p=t;
        }
        return hh.next;
    }
    void reverseNodes(ListNode *head,ListNode *tail)
    {
        ListNode hh(0),*p=head->next;
        hh.next=tail;
        while(p!=tail)
        {
            head->next=p->next;
            p->next=hh.next;
            hh.next=p;
            p=head->next;
        }
        head->next=hh.next;
    }
};
