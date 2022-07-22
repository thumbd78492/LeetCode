map<string, bool> dp;

bool word_break(string s, vector<string>& wordDict) {
    if (s == "") return true;
    if (dp.find(s) != dp.end()) return dp[s];

    for (int i=0; i<wordDict.size(); i++)
    {
        if (wordDict[i] == s.substr(0, wordDict[i].length()) && word_break(s.substr(wordDict[i].length()), wordDict))
        {
            dp[s] = true;
            return true;
        }
        dp[s] = false;
    }
    return false;
}

bool wordBreak(string s, vector<string>& wordDict) {
    return word_break(s, wordDict);
}
