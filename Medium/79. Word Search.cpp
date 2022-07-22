bool isSafe(int sizex, int sizey, int x, int y)
{
    return (x >= 0 && x < sizex && y >=0 && y < sizey);
}

bool DFS(vector<vector<char>>& board, string& word, int x, int y, int nw)
{
    if (!isSafe(board.size(), board[0].size(), x, y))
        return false;

    if (board[x][y] == word[nw])
    {
        nw++;
        if (nw == word.length())
            return true;
        //cout << board[x][y] << " " << x << " " << y << endl;

        char t = board[x][y];
        board[x][y] = '@';
        if (DFS(board, word, x+1, y, nw) || DFS(board, word, x-1, y, nw) || DFS(board, word, x, y+1, nw) || DFS(board, word, x, y-1, nw))
            return true;
        board[x][y] = t;
    }
    return false;
}

bool exist(vector<vector<char>>& board, string word) {
    for (int i=0; i<board.size(); i++)
        for (int j=0; j<board[0].size(); j++)
            if (DFS(board, word, i, j, 0))
                return true;
    return false;
}
