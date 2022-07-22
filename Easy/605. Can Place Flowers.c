bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    int now = -2;
    int ret = 0, i;
    for (i=0; i<flowerbedSize; i++) {
        if (flowerbed[i] == 1) {
            printf("before: i: %d, now: %d, ret: %d\n", i, now, ret);
            if (now == -1) {
                now = i;
                ret += i/2 + i%2;
            }
            else {
                int len = i - now - 3;
                if (len > 0)
                    ret += len/2 + len%2;
                now = i;
            }
            printf("after: i: %d, now: %d, ret: %d\n", i, now, ret);
        }
    }
    int len = i - now - 2;
    if (len > 0)
        ret += len/2 + len%2;
    
    printf("final: i: %d, now: %d, ret: %d\n", i, now, ret);
    return (ret >= n);
}
