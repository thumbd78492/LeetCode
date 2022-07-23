struct TreeNode* buildSubtree(int* nums, int l, int r) {
    if (l > r)
        return NULL;
    
    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    int mid = (l+r)/2;
    root->val = nums[mid];
    root->left = buildSubtree(nums, l, mid-1);
    root->right = buildSubtree(nums, mid+1, r);
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    return buildSubtree(nums, 0, numsSize-1);
}
