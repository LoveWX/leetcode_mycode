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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode hh(0);
        ListNode *p=&hh,*q=&hh;
        hh.next=head;
        while(n--)
        {
            q=q->next;
        }
        while(q->next!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        q=p->next;
        p->next=q->next;
        return hh.next;
    }
};
