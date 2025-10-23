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
int maxPath = 0 ;
void findPath ( TreeNode * root , int l , int  r ) {
   if(!root) return ;
   maxPath  = max({maxPath , l  , r});
   findPath (root->left , r+1 , 0);
   findPath (root->right , 0 , l+1);
  } 
  
  int longestZigZag(TreeNode* root) {
        findPath(root , 0 , 0) ;
        
     
        return maxPath ;
    }
};