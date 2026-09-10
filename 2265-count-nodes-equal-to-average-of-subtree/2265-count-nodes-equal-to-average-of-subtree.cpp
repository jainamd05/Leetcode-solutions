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
    int ans = 0 ;

    pair <int, int> postOrder(TreeNode* root){
        if (root == NULL) return {0, 0} ;

        pair <int, int> left =  postOrder(root->left) ;
        pair <int, int> right = postOrder(root->right) ;

        int node_sum = left.first + root-> val + right.first ;
        int num_nodes = left.second + 1 + right.second ;

        if (root->val == (node_sum / num_nodes)) ans++ ;

        return {node_sum, num_nodes} ;
    }
    int averageOfSubtree(TreeNode* root) {
        postOrder(root) ;
        return ans ;
    }
};