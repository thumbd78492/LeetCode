vector<int> numberOfPairs(vector<int>& nums) {
    int counter[101] = {0};
    for (auto &it : nums) {
        counter[it]++;
    }

    vector<int> ret;
    int ret1 = 0, ret2 = 0;
    for (int i=0; i<=100; i++) {
        ret1 = ret1 + counter[i] / 2;
        ret2 = ret2 + counter[i] % 2;
    }
    ret.emplace_back(ret1);
    ret.emplace_back(ret2);
    return ret;
}
