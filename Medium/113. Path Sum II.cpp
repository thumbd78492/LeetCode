vector<vector<int>> ret;

void DFS(TreeNode* nowNode, int sum, int now, vector<int>& nowVec)
{
    cout << nowNode->val;

    now += nowNode->val;
    nowVec.push_back(nowNode->val);
    if (!nowNode->left && !nowNode->right)
        if (now == sum)
            ret.push_back(nowVec);

    if (nowNode->left)
        DFS(nowNode->left, sum, now, nowVec);
    if (nowNode->right)
        DFS(nowNode->right, sum, now, nowVec);
    nowVec.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int sum) {
    vector<int> nowVec;
    if (!root)
        return ret;
    DFS(root, sum, 0, nowVec);

    return ret;
}
