#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
class Solution {
public:
    int helper(TreeNode * root , int mini , int maxi ){
        if(!root) return maxi - mini  ;
        mini = min(mini , root->val);
        maxi = max(maxi , root->val);
        int l =helper (root->left ,mini , maxi);
        int r =helper(root->right , mini , maxi);
        return max(l , r) ;
    }
    int maxAncestorDiff(TreeNode* root) {
        return helper(root , INT_MAX , INT_MIN);
    }
};


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int main() {
    // Example tree:      1
    //                  /   \
    //                 2     3
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    Solution sol;
    std::cout << "Max Ancestor Diff: " << sol.maxAncestorDiff(root) << std::endl;

    // Clean up
    delete root->left;
    delete root->right;
    delete root;
    return 0;
}