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
    ListNode* partition(ListNode* head, int x)
    {
        ListNode h1(0),h2(0);
        ListNode *p1=&h1,*p2=&h2,*q=head;
        while(q!=NULL)
        {
            if(q->val<x)
            {
                p1->next=q;
                p1=q;
            }
            else
            {
                p2->next=q;
                p2=q;
            }
            q=q->next;
        }
        p1->next=h2.next;
        p2->next=NULL;
        return h1.next;
    }
};
