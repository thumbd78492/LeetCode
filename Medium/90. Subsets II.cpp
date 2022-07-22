set<vector<int>> ans;

void DFS(vector<int>& nums, vector<int>& nowVec, int now)
{
    if (now == nums.size())
    {
        ans.insert(nowVec);
        return;
    }
    nowVec.push_back(nums[now]);
    DFS(nums, nowVec, now+1);
    nowVec.pop_back();
    DFS(nums, nowVec, now+1);
    return;
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<int> vec;
    sort(nums.begin(), nums.end());
    DFS(nums, vec, 0);
    vector<vector<int>> ret;
    ret.assign(ans.begin(), ans.end());

    return ret;
}
