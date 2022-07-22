string addBinary(string a, string b) {
    if (a.length() < b.length())
        swap(a, b);

    string ret = "";
    bool carry = false;
    for (int i=a.length()-1, j=b.length()-1; i>=0; i--, j--)
    {
        int t = 0;
        if (a[i] == '1')
            t++;
        if (j < b.length() && b[j] == '1')
            t++;
        if (carry)
            t++;

        switch(t)
        {
            case 0:
                ret = '0' + ret;
                carry = false;
                break;
            case 1:
                ret = '1' + ret;
                carry = false;
                break;
            case 2:
                ret = '0' + ret;
                carry = true;
                break;
            case 3:
                ret = '1' + ret;
                carry = true;
                break;
        }
    }
    if (carry)
        ret = '1' + ret;

    return ret;
}
