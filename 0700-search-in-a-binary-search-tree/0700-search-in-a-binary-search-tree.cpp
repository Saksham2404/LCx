
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int target) {
    while (root != NULL && root->val != target) {

        if (root->val > target){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    
    return root;

    }
};

// sxksham