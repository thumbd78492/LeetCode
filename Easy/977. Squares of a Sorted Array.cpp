vector<int> sortedSquares(vector<int>& A) {
    int mid = -1;
    for (int i=0; i<A.size(); i++)
    {
        if (A[i] > -1 && mid == -1)
            mid = i;
        A[i] = A[i] * A[i];
    }
    if (mid == -1)  //全是負數
        mid = A.size() - 1;

    int i = mid-1, j=mid;

    vector<int> ans;
    while (i >=0 || j < A.size())
    {
        if (j >= A.size())
            ans.push_back(A[i--]);
        else if (i < 0)
            ans.push_back(A[j++]);
        else
        {
            if (A[i] < A[j])
                ans.push_back(A[i--]);
            else
                ans.push_back(A[j++]);
        }
    }
    return ans;

}
