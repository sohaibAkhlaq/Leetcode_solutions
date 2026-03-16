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
    vector<int> inorderTraversal(TreeNode* root) {

        // ------ sol1 using recursion -----

        // vector<int> ans;
        // if(root==NULL)  return ans;
        
        // vector<int> left = inorderTraversal(root->left);
        // ans.insert(ans.end(), left.begin(), left.end());

        
        // ans.push_back(root->val);

        
        // vector<int> right = inorderTraversal(root->right);
        // ans.insert(ans.end(), right.begin(), right.end());

        // return ans;


        // --- sol2 ----- (using morris inorder traversal)

        vector<int> ans;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left==NULL){
                ans.push_back(curr->val);
                curr=curr->right;
            }
            else{
                //find inorder predecessor rightmots in left
                TreeNode* IP=curr->left;
                while(IP->right!=NULL && IP->right!=curr){
                    IP=IP->right;
                }

                if(IP->right==NULL){
                    //establish connection
                    IP->right=curr;
                    curr=curr->left;
                }
                else{
                    IP->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;

                }
            }
        }
        return ans;
    }
};