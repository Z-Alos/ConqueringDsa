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
    void recurse(TreeNode* curr, int currDepth, int& result) {
        //base case
        if(curr == nullptr) {
            result = max(result, currDepth);
            return;
        }           

        //pre
        //...
        //recurse
        recurse(curr->left,currDepth + 1, result);
        recurse(curr->right, currDepth + 1, result);
        
        return;
    }

    int maxDepth(TreeNode* root) {
      int result = 0;
      recurse(root, 0, result);

      return result;
    }
};

