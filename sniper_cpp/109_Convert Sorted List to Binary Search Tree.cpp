/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head)
    {
        int len=0;
        ListNode *p=head;
        while(p!=NULL)
        {
            p=p->next;
            len++;
        }
        return buildBST(head,len);
    }
    TreeNode* buildBST(ListNode *head,int len)
    {
        if(len==0)
        {
            return NULL;
        }
        if(len==1)
        {
            TreeNode *p=new TreeNode(head->val);
            return p;
        }
        int i=len/2;
        ListNode *p=head;
        while(i--)
        {
            p=p->next;
        }
        TreeNode *root=new TreeNode(p->val);
        i=len/2;
        root->left=buildBST(head,i);
        root->right=buildBST(p->next,len-i-1);
        return root;
    }
};
