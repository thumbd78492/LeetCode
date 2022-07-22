int uniquePaths(int m, int n) {
    if (m==1 && n==1)
        return 1;

    m = m-1;
    n = n-1;
    int a = m+n;
    long long b = 1;
    long long c = 1;
    for (int i=0; i<min(m, n); i++)
    {
        b *= (a-i);
        c *= (i+1);
    }
    return b/c;
}
