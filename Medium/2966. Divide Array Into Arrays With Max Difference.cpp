class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());

        vector<vector<int>> ret;
        vector<vector<int>> emptyVec;
        for (int i=0; i<nums.size(); i=i+3) {
            vector<int> tmp(3);
            if (nums[i+2] - nums[i] > k) {
                return emptyVec;
            }
            
            tmp[0] = nums[i];
            tmp[1] = nums[i+1];
            tmp[2] = nums[i+2];
            ret.emplace_back(tmp);
        }

        return ret;
    }
};
