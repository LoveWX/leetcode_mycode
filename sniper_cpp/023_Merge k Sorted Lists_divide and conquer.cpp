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
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        return mergeLists(lists,0,lists.size()-1);
    }
    ListNode* mergeLists(vector<ListNode*> &lists,int left,int right)
    {
        if(left>right)
        {
            return NULL;
        }
        if(left==right)
        {
            return lists[left];
        }
        int mid=(left+right)/2;
        ListNode *pl=mergeLists(lists,left,mid);
        ListNode *pr=mergeLists(lists,mid+1,right);
        return merge2Lists(pl,pr);
    }
    ListNode* merge2Lists(ListNode *h1,ListNode *h2)
    {
        ListNode hh(0);
        ListNode *p=&hh;
        while(h1!=NULL&&h2!=NULL)
        {
            if(h1->val<h2->val)
            {
                p->next=h1;
                p=h1;
                h1=h1->next;
            }
            else
            {
                p->next=h2;
                p=h2;
                h2=h2->next;
            }
        }
        if(h1!=NULL)
        {
            p->next=h1;
        }
        else
        {
            p->next=h2;
        }
        return hh.next;
    }
};
