bool DFS(TreeNode* nowNode, int sum, int now) {
    now += nowNode->val;
    if (!nowNode->left && !nowNode->right)
        if (now == sum)
            return true;
        else
            return false;

    if (nowNode->left && nowNode->right)
        return DFS(nowNode->left, sum, now) || DFS(nowNode->right, sum, now);
    else if (nowNode->left)
        return DFS(nowNode->left, sum, now);
    else
        return DFS(nowNode->right, sum, now);
}

bool hasPathSum(TreeNode* root, int sum) {
    if (!root)
        return false;
    return DFS(root, sum, 0);
}
