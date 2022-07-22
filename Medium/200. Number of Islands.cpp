int ret = 0;
void checkIslands(vector<vector<char>>& grid, int x, int y, vector<vector<bool>>& visited, bool first)
{
    if (x<0 || y<0 || x>=grid[0].size() || y>=grid.size() || grid[y][x] == '0' || visited[y][x])
        return;

    if (first)
        ret++;
    visited[y][x] = true;
    checkIslands(grid, x+1, y, visited, false);
    checkIslands(grid, x-1, y, visited, false);
    checkIslands(grid, x, y+1, visited, false);
    checkIslands(grid, x, y-1, visited, false);
}

int numIslands(vector<vector<char>>& grid) {
    if (grid.size() == 0)
        return 0;

    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
    for (int i=0; i<grid.size(); i++)
        for (int j=0; j<grid[0].size(); j++)
            checkIslands(grid, j, i, visited, true);
    return ret;

}
