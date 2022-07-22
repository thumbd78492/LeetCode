vector<vector<int>> ret;
void DFS(int n, int k, int now, vector<int>& nowVec)
{
    if (now > n+1)
        return;
    if (nowVec.size() == k)
    {
        ret.push_back(nowVec);
        return;
    }

    DFS(n, k, now+1, nowVec);
    nowVec.push_back(now);
    DFS(n, k, now+1, nowVec);
    nowVec.pop_back();
    return;
}

vector<vector<int>> combine(int n, int k) {
    vector<int> vec;
    DFS(n, k, 1, vec);
    return ret;
}
