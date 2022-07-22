void DFS(vector<int>& nums, int S, int index, int now, int &ret)
{
    if (index >= nums.size())
    {
        ret += (now == S) ? 1 : 0;
        return;
    }
    else
    {
        DFS(nums, S, index+1, now+nums[index], ret);
        DFS(nums, S, index+1, now-nums[index], ret);
    }

}

int findTargetSumWays(vector<int>& nums, int S) {
    int ret = 0;
    DFS(nums, S, 0, 0, ret);
    return ret;
}
