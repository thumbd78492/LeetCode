#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int maxArea(int* height, int heightSize){
    int left, right;
    int ret = -1;
    for (int leftIdx=0, rightIdx=heightSize-1; leftIdx != rightIdx; ) {
        left = height[leftIdx];
        right = height[rightIdx];
        ret = MAX(MIN(left, right) * (rightIdx - leftIdx), ret);
        if (left >= right) {
            rightIdx--;
        }
        else {
            leftIdx++;
        }
    }
    return ret;
}
