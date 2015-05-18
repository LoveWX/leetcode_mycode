/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head)
    {
        RandomListNode hh(0);
        RandomListNode *p=&hh,*q=head;
        map<RandomListNode*,RandomListNode*> dict;
        while(q!=NULL)
        {
            p->next=new RandomListNode(q->label);
            p=p->next;
            dict[q]=p;
            q=q->next;
        }
        for(p=hh.next,q=head;q!=NULL;p=p->next,q=q->next)
        {
            p->random=dict[q->random];
        }
        return hh.next;
    }
};
