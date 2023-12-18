class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ret(2);

        unordered_set<int> s;
        int sum = 0;
        int n = grid.size();
        int largestNumber = n*n;
        int total = ((1+largestNumber) * largestNumber) / 2;

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                auto search = s.find(grid[i][j]);
                if (search != s.end()) {
                    ret[0] = grid[i][j];
                }
                else {
                    s.insert(grid[i][j]);
                }
                sum += grid[i][j];
            }
        }
        ret[1] = total - (sum - ret[0]);

        return ret;
    }
};
