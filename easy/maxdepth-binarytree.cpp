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
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int depth = 1;
        depth += max(maxDepth(root->left),maxDepth(root->right));

        return depth;
    
    }
};

//better runtime and memory: 
public:
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int depth = 1;
        
        if (root->left && root->right) {
            depth += max(maxDepth(root->left),maxDepth(root->right));
        }
        else if (root->left) {
            depth += maxDepth(root->left);
        }
        else if (root->right) {
            depth += maxDepth(root->right);
        }

        return depth;
    
    }
};
