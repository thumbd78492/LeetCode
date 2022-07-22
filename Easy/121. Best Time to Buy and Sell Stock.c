int maxProfit(int* prices, int pricesSize){
    int ret = 0;
    int min = prices[0];
    for (int i=1; i<pricesSize; i++) {
        if (prices[i] - min > ret)
            ret = prices[i] - min;
        if (prices[i] < min)
            min = prices[i];
    }
    return ret;
}
