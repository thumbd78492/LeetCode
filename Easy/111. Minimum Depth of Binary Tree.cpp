int minDepth(TreeNode* root) {
    if(!root)
        return 0;

    queue<TreeNode*> q;
    int currDepth=0;

    q.push(root);

    while(!q.empty()){
        int n = q.size();
        currDepth++;

        while (n--) {
            TreeNode* curr = q.front();
            q.pop();

            if (!curr->left && !curr->right) {
                return currDepth;
            }
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }

    return -1; // to avoid compiler warning since fun is returning int . 
}
