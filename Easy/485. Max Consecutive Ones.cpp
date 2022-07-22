int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxm, m = 0;
    for (int i=0; i<nums.size(); i++)
        if (nums[i] == 1)
        {
            m++;
            if (maxm < m)
                maxm = m;
        }
        else
            m = 0;
    return maxm;
}
