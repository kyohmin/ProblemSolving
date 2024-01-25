/*
Problem Name: 104. Maximum Depth of Binary Tree
Date        : Jan-25,2024
Link        : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
Difficulty  : Easy
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);

        return max(maxLeft,maxRight)+1;
    }
}
;

/*
[Self Reflection]
    How the solution works:
        DFS - Go to the bottom and add one bottom up.

    Why failed to solve:
        Tried to add top down method.
        Lack of DFS knowledge
*/