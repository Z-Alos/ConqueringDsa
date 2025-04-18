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
        void traverse(TreeNode* curr, vector<int>& result){
            //base case
            if(!curr) return;

            //pre
            result.push_back(curr->val);

            //recurse
            traverse(curr->left, result);
            traverse(curr->right, result);

            return;
        }

        vector<int> preorderTraversal(TreeNode* root) {
            vector<int> result;
            traverse(root, result);

            return result;
        }
};

