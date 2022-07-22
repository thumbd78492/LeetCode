vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> um;
    vector<int> ret;
    for (int i=0; i<nums.size(); i++) {
        if (um.find(nums[i]) == um.end()) {
            um[target-nums[i]] = i;
        }
        else {
            ret.emplace_back(i);
            ret.emplace_back(um[nums[i]]);
        }
    }
    return ret;
}
