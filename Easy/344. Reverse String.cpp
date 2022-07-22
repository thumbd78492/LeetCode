void reverseString(vector<char>& s) {
    int sSize = s.size();
    for (int i=0; i<sSize/2; i++) {
        char temp = s[i];
        s[i] = s[sSize-i-1];
        s[sSize-i-1] = temp;
    }
    return;
}
