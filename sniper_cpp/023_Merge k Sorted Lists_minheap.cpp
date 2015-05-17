/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 bool cmp(ListNode *&a,ListNode *&b)
 {
     if(a==NULL)
     {
         return false;
     }
     if(b==NULL)
     {
         return true;
     }
     return a->val<b->val;
 }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        if(lists.size()==0)
        {
            return NULL;
        }
        sort(lists.begin(),lists.end(),cmp);
        int i;
        for(i=lists.size()-1;i>=0;i--)
        {
            if(lists[i]==NULL)
            {
                lists.pop_back();
            }
        }
        ListNode hh(0);
        ListNode *p=&hh;
        i=lists.size();
        while(i>1)
        {
            p->next=lists[0];
            p=p->next;
            lists[0]=p->next;
            if(p->next==NULL)
            {
                lists[0]=lists[--i];
                lists.pop_back();
            }
            renewTree(lists,0);
        }
        p->next=lists[0];
        return hh.next;
    }
    void renewTree(vector<ListNode*> &lists,int root)
    {
        int left=root+root+1;
        int len=lists.size();
        if(left>=len)
        {
            return;
        }
        int right=left+1;
        if(right>=len)
        {
            if(cmp(lists[left],lists[root]))
            {
                swap(lists[left],lists[root]);
            }
            return;
        }
        if(cmp(lists[root],lists[left]) && cmp(lists[root],lists[right]))
        {
            return;
        }
        if(cmp(lists[left],lists[right]))
        {
            swap(lists[root],lists[left]);
            renewTree(lists,left);
        }
        else
        {
            swap(lists[root],lists[right]);
            renewTree(lists,right);
        }
    }
};
