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
    ListNode* reverseList(ListNode* head)
    {
        ListNode h1(0),h2(0),*p=head;
        h1.next=head;
        while(p!=NULL)
        {
            h1.next=p->next;
            p->next=h2.next;
            h2.next=p;
            p=h1.next;
        }
        return h2.next;
    }
};
