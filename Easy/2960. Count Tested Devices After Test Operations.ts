function countTestedDevices(batteryPercentages: number[]): number {
    let ret = 0;
    
    for (let i = 0; i < batteryPercentages.length ; i++) {
        if (batteryPercentages[i] > ret) {
            ret = ret + 1;
        }
    }

    return ret;
};
