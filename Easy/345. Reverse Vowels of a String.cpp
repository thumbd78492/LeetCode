string reverseVowels(string s) {
    vector<int> pos;
    string vowels = "aeiouAEIOU";
    for (int i=0; i<s.length(); i++) {
        if (vowels.find(s[i]) != string::npos)
            pos.emplace_back(i);
    }

    for (int i=0; i<pos.size()/2; i++) {
        int l, r;
        char tmp;
        l = pos[i];
        r = pos[pos.size()-i-1];
        tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
    }
    return s;
}
