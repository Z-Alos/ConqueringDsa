/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool compare(TreeNode* p, TreeNode* q) {
        //base case
        if(p == nullptr && q == nullptr) return true;
        if(p == nullptr || q == nullptr) return false;
        if (p->val != q->val) return false;

        //recurse
        return compare(p->left, q->left) && compare(p->right, q->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
       return compare(p, q); 
    }
};

