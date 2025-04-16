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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;
        queue<TreeNode*> q;
        q.push(root); //the q.size() is 1;
        while(!q.empty()){
            int levelSize = q.size();
            vector<int> currLevel;
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front(); //get the first node in queue
                q.pop();

                currLevel.push_back(node->val);

                if(node->left) q.push(node->left); 
                if(node->right) q.push(node->right); 
            }
            
            result.push_back(currLevel);
            
        }
       return result;
    }
};

