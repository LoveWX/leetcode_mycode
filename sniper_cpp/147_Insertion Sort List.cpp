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
    ListNode* insertionSortList(ListNode* head)
    {
        ListNode hh(0);
        ListNode *p,*q,*t=head;
        while(t!=NULL)
        {
            for(p=&hh,q=hh.next;q!=NULL&&t->val>q->val;p=q,q=q->next);
            q=t->next;
            t->next=p->next;
            p->next=t;
            t=q;
        }
        return hh.next;
    }
};
