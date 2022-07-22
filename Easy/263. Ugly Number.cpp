bool isUgly(int n) {
    if(n==0) return false;
    if(n==1) return true;

    return ((n%2 == 0 and isUgly(n/2)) or (n%3 == 0 and isUgly(n/3)) or (n%5 == 0 and isUgly(n/5)));
}
