int digitSum(int inp) {
    int counter = 0;
    while (inp > 0) {
        counter += inp % 10;
        inp /= 10;
    }
    return counter;
}

int maximumSum(vector<int>& nums) {
    unordered_map<int, priority_queue<int>> m;
    for (int i=0; i<nums.size(); i++) {
        int ds = digitSum(nums[i]);
        if (m.find(ds) == m.end()) {
            priority_queue<int> pq;
            pq.push(nums[i]);
            m[ds] = pq;
        }
        else {
            m[ds].push(nums[i]);
        }
    }

    int ret = -1;
    for (auto &it : m) {
        // cout << it.first << endl;
        int tmp;
        if (!it.second.empty()) {
            tmp = it.second.top();
            it.second.pop();
            if (!it.second.empty()) {
                tmp += it.second.top();
                ret = (ret > tmp) ? ret : tmp;
            }
        }
    }

    return ret;
}
