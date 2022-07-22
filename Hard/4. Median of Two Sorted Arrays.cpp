double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i1=0, i2=0;
    int n1 = nums1.size(), n2 = nums2.size();
    vector<int> nums3(n1+n2);

    for (int i=0; i<n1+n2; i++)
    {
        if (i1 == n1)
            nums3[i] = nums2[i2++];
        else if (i2 == n2)
            nums3[i] = nums1[i1++];
        else
            nums3[i] = nums1[i1] < nums2[i2] ? nums1[i1++] : nums2[i2++];
    }
    /*for (int i=0; i<n1+n2; i++)
        cout << nums3[i] << " ";
    cout << endl;*/

    if ((n1+n2) % 2 == 1)
        return nums3[(n1+n2)/2] / 1.0;
    else
        return (nums3[(n1+n2)/2-1] + nums3[(n1+n2)/2]) / 2.0;
}
