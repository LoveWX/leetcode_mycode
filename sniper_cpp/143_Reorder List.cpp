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
    void reorderList(ListNode* head)
    {
        ListNode h1(0),h2(0);
        h1.next=head;
        ListNode *p=&h1,*q=&h1;
        while(q!=NULL)
        {
            q=q->next;
            if(q==NULL)
            {
                break;
            }
            p=p->next;
            q=q->next;
        }
        q=p->next;
        p->next=NULL;
        while(q!=NULL)
        {
            p=q->next;
            q->next=h2.next;
            h2.next=q;
            q=p;
        }
        p=h1.next;
        q=h2.next;
        while(q!=NULL)
        {
            h2.next=q->next;
            q->next=p->next;
            p->next=q;
            p=q->next;
            q=h2.next;
        }
    }
};
