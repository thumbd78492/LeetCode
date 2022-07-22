int search(vector<int>& nums, int target) {
    int n = nums.size();      // n=numbers of choosing array
    int s = 0, e = n-1;     // s=start, m=middle, e=end
    int m = n / 2;
    if (n == 0)
        return -1;
    if (nums[s] == target)
        return s;
    if (nums[m] == target)
        return m;
    if (nums[e] == target)
        return e;
    while (n > 1)
    {
        if (target > nums[s] && target < nums[m])
        {
            //只留下前半段
            e = m-1;
            n = e-s+1;
        }
        else if (target < nums[s] && target > nums[m])
        {
            //只留下後半段
            s = m;
            n = e-s+1;
        }
        else
        {
            //無論target比兩者都大或都小，留下大的那一半
            if (nums[s] > nums[m])
            {
                e = m-1;
                n = e-s+1;
            }
            else
            {
                s = m;
                n = e-s+1;
            }
        }
        m = s + (n / 2);

        if (nums[s] == target)
            return s;
        if (nums[m] == target)
            return m;
    }

    return -1;
}
