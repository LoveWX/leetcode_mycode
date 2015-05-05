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
    ListNode* reverseBetween(ListNode* head, int m, int n)
    {
        ListNode h1(0),h2(0);
        h1.next=head;
        ListNode *p=&h1,*q,*t;
        int i;
        for(i=1;i<m;i++,p=p->next);
        t=p->next;
        for(i=m;i<=n;i++)
        {
            q=p->next;
            p->next=q->next;
            q->next=h2.next;
            h2.next=q;
        }
        t->next=p->next;
        p->next=h2.next;
        return h1.next;
    }
};
