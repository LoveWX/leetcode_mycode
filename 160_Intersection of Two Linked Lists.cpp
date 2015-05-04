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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if(headA==NULL || headB==NULL)
        {
            return NULL;
        }
        int la=0,lb=0;
        ListNode *p=headA,*q=headB;
        while(p!=NULL)
        {
            la++;
            p=p->next;
        }
        while(q!=NULL)
        {
            lb++;
            q=q->next;
        }
        p=headA;
        q=headB;
        if(la>lb)
        {
            la-=lb;
            while(la--)
            {
                p=p->next;
            }
        }
        else
        {
            lb-=la;
            while(lb--)
            {
                q=q->next;
            }
        }
        while(p!=NULL && q!=NULL)
        {
            if(p==q)
            {
                return p;
            }
            p=p->next;
            q=q->next;
        }
        return NULL;
    }
};
