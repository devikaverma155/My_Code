class Solution {
public:
    
    long M = 1e9+7;
    long totalSum = 0, maxP = 0;
    
    int findTotalSum(TreeNode* root) {
        if(!root) return 0 ;
        int l  = findTotalSum (root->left);
        int r = findTotalSum (root->right);
        int sum = l+r + root->val ;
        maxP= max(maxP , (totalSum - sum) * sum );

        return sum ;
    }
    
    int maxProduct(TreeNode* root) {
        if(!root)
            return 0;
        
        maxP = 0;
        
        totalSum = findTotalSum(root);
        
        // cout << maxP << endl;
        // we should know the total sum and then calsulate the maxP
        findTotalSum(root);
        
        return maxP%M;
    }
};