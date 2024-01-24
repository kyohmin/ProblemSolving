/*
Problem Name: 94. Binary Tree Inorder Traversal
Date        : Jan-24,2024
Link        : https://leetcode.com/problems/binary-tree-inorder-traversal/
Difficulty  : Easy
*/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> answer;
        inorder(root, answer);
        return answer;
    }

private:
    void inorder(TreeNode* root, vector<int> &vec){
        if(!root){
            return;
        }
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
};

/*
[Self Reflection]
    How the solution works: 
        1. DFS - Search deepest left value
        2. Add to the stack
        3. Search right
        4. Repeat 1 ~ 3

    Why I failed to solve:
        Didn't have enough knowledge on Tree structure
         
*/