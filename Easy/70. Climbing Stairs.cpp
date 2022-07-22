int climbStairs(int n) {
    //走兩步到h、走一步到l
    if (n == 1)
        return 1;
    int h = 1, l = 2;
    for (int i=n-2; i>0; i--)
    {
        int t = h;
        h = l;
        l = t+l;
    }
    return l;

}
