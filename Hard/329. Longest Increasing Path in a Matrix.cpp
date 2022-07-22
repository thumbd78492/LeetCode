int DFS(vector<vector<int>>& matrix, vector<vector<int>>& DP, int i, int j, int prev, int step)
{
    if (i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size() || prev>=matrix[i][j])
        return step;
    if (DP[i][j] != -1)
        return step+DP[i][j];

    //cout << matrix[i][j] << " ";
    step++;
    int directions[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    int ret = -1;
    for (int k=0; k<4; k++)
    {
        int t = DFS(matrix, DP, i+directions[k][0], j+directions[k][1], matrix[i][j], 0) + 1;
        if (ret < t)
            ret = t;
    }
    DP[i][j] = ret;
    //cout << endl;
    return ret;
}

int longestIncreasingPath(vector<vector<int>>& matrix) {
    if (matrix.size() == 0)
        return 0;

    vector<vector<int>> DP(matrix.size(), vector<int>(matrix[0].size(), -1));

    int ret = -1;
    for (int i=0; i<matrix.size(); i++)
        for (int j=0; j<matrix[0].size(); j++)
        {
            int t = DFS(matrix, DP, i, j, -1, 0);
            if (ret < t)
                ret = t;
        }
    /*for (int i=0; i<matrix.size(); i++)
    {
        for (int j=0; j<matrix[0].size(); j++)
            cout << DP[i][j] << " ";
        cout << endl;
    }*/

    return ret;
}
