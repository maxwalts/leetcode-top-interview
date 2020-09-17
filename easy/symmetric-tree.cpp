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
    bool isSymmetric(TreeNode* root) {
        if(!root) {
            return true;
        }
        
        return isSymmetric(root->left, root->right);
    }
    
private: 
    bool isSymmetric(TreeNode *leftRoot, TreeNode *rightRoot) {
        if(!rightRoot && !leftRoot) {
            return true;
        }
        
        if(!rightRoot || !leftRoot) {
            return false;
        }
        
        if(rightRoot->val != leftRoot->val) {
            return false;
        }
        
        return isSymmetric(leftRoot->left, rightRoot->right) && isSymmetric(leftRoot->right, rightRoot->left);
    }
};
