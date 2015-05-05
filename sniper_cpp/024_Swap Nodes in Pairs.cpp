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
    ListNode* swapPairs(ListNode* head)
    {
        ListNode hh(0);
        hh.next=head;
        ListNode *p=&hh,*q=head;
        while(q!=NULL)
        {
            if(q->next==NULL)
            {
                break;
            }
            p->next=q->next;
            p=q->next;
            q->next=p->next;
            p->next=q;
            p=q;
            q=q->next;
        }
        return hh.next;
    }
};
