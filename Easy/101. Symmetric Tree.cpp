bool isSymmetricTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr)
        return true;
    if (p == nullptr || q == nullptr)
        return false;
    if (p->val != q->val)
        return false;

    return isSymmetricTree(p->left, q->right) && isSymmetricTree(p->right, q->left);
}

bool isSymmetric(TreeNode* root) {
    if (root == nullptr)
        return true;
    if (root->left == nullptr && root->right == nullptr)
        return true;
    if (root->left == nullptr || root->right == nullptr)
        return false;

    return isSymmetricTree(root->left, root->right);
}
