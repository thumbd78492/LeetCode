int peakIndexInMountainArray(int* arr, int arrSize){
    int left = 0, right = arrSize, mid = (left+right)/2;
    while (mid-1 >= left && mid+1<right) {
        if (arr[mid-1] < arr[mid] && arr[mid] < arr[mid+1]) {
            left = mid-1;
            mid = (left+right)/2;
        }
        else if (arr[mid-1] > arr[mid] && arr[mid] > arr[mid+1]) {
            right = mid+1;
            mid = (left+right)/2;
        }
        else if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) {
            return mid;
        }
        else return -1;
    }
    return -1;

}
