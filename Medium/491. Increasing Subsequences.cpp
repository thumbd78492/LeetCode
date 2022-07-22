set<vector<int>> ans;
void DFS(vector<int>& nums, vector<int> &nowVec, int now, int prev)
{
    if (now >= nums.size())
        if (nowVec.size() < 2)
            return;
        else
        {
            ans.insert(nowVec);
            return;
        }

    DFS(nums, nowVec, now+1, prev);
    if (nums[now] >= prev)
    {
        nowVec.push_back(nums[now]);
        DFS(nums, nowVec, now+1, nums[now]);
        nowVec.pop_back();
    }
}

vector<vector<int>> findSubsequences(vector<int>& nums) {
    vector<int> nowVec;
    DFS(nums, nowVec, 0, INT_MIN);

    return vector<vector<int>>(ans.begin(), ans.end());
}
