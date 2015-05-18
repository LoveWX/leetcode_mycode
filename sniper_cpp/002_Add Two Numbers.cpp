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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int carry=0,tt;
        ListNode hh(0);
        ListNode *p=&hh;
        while(l1!=NULL && l2!=NULL)
        {
            tt=l1->val+l2->val+carry;
            p->next=new ListNode(tt%10);
            p=p->next;
            carry=tt/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            tt=l1->val+carry;
            p->next=new ListNode(tt%10);
            p=p->next;
            carry=tt/10;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            tt=l2->val+carry;
            p->next=new ListNode(tt%10);
            p=p->next;
            carry=tt/10;
            l2=l2->next;
        }
        if(carry>0)
        {
            p->next=new ListNode(carry);
        }
        return hh.next;
    }
};
