bool isBST(TreeNode* root, long top, long bottom)
{
    if (!root)
        return true;
    if (root->val >= top)
        return false; 
    if (root->val <= bottom)
        return false;
    return isBST(root->left, root->val, bottom) && isBST(root->right, top, root->val);
}
bool isValidBST(TreeNode* root) {
    if (!root)
        return true;
    if ((!root->left) && (!root->right))
        return true;
    return isBST(root, long(INT_MAX)+1, long(INT_MIN)-1);
}
