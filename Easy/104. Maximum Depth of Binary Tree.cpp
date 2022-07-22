int findDepth(TreeNode* now, int depth) {
    if (now == nullptr)
        return depth;
    return max(findDepth(now->left, depth+1), findDepth(now->right, depth+1));
}

int maxDepth(TreeNode* root) {
    return findDepth(root, 0);
}
