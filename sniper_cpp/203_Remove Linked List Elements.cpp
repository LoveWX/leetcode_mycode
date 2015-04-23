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
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode hh(-1);
        hh.next=head;
        ListNode *p=&hh,*q=head;
        while(q!=NULL)
        {
            if(q->val==val)
            {
                p->next=q->next;
                //delete q;
                q=p->next;
            }
            else
            {
                p=q;
                q=q->next;
            }
        }
        return hh.next;
    }
};
