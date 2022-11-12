// TLE, but the method is in the right way
// I've checked the other soltutions, they got the same idea but a little more efficiently.

function totalCost(costs: number[], k: number, candidates: number): number {
    let candidateListLength = candidates * 2
    let frontCandidateList: number[] = []
    let backCandidateList: number[] = []
    let frontIndex: number = -1
    let backIndex: number = -1
    
    if (candidateListLength > costs.length) {
        frontCandidateList = costs.slice()
        frontCandidateList.sort()
        frontIndex = costs.length - 1
    }
    else {
        frontCandidateList = costs.slice(0, candidates)
        frontCandidateList.sort()
        backCandidateList = costs.slice(costs.length - candidates)
        backCandidateList.sort()
        frontIndex = candidates - 1
        backIndex = costs.length - candidates
    }
    
    let frontMin = Math.min(...frontCandidateList), backMin = 100005
    if (backCandidateList.length > 0) {
        backMin = Math.min(...backCandidateList)
    }

    let ret = 0
    // console.log(costs.length)
    while (k > 0) {
        // console.log(k, "-th ele")
        // console.log("ret:", ret)
        // console.log("f/b:", frontMin, backMin)

        if (backMin < frontMin) {
            // console.log("pick back")
            ret += backMin
            
            // console.log("before remove:", backCandidateList)
            let index = backCandidateList.indexOf(backMin);
            backCandidateList.splice(index, 1); // remove one item only
            // console.log("after remove:", backCandidateList)
            
            if (backIndex > frontIndex + 1) {
                backIndex -= 1
                let l = 0, r = backCandidateList.length-1, mid = Math.floor((l+r)/2)
                while (r > l) {
                    if (backCandidateList[mid] > costs[backIndex]) {
                        r = mid
                    }
                    else {
                        l = mid+1
                    }
                    mid = Math.floor((l+r)/2)
                }
                
                backCandidateList.splice(mid, 0, costs[backIndex])
            }
            
            if (backCandidateList.length > 0) {
                backMin = Math.min(...backCandidateList)
            }
            else {
                backMin = 100005
            }
        }
        else {
            // console.log("pick front")
            ret += frontMin
            
            // console.log("before remove:", backCandidateList)
            let index = frontCandidateList.indexOf(frontMin);
            frontCandidateList.splice(index, 1); // remove one item only
            // console.log("after remove:", backCandidateList)
            
            if (backIndex > frontIndex + 1) {
                frontIndex += 1
                let l = 0, r = frontCandidateList.length-1, mid = Math.floor((l+r)/2)
                while (r > l) {
                    if (frontCandidateList[mid] > costs[frontIndex]) {
                        r = mid
                    }
                    else {
                        l = mid+1
                    }
                    mid = Math.floor((l+r)/2)
                }
                
                frontCandidateList.splice(mid, 0, costs[frontIndex])
            }
            
            if (frontCandidateList.length > 0) {
                frontMin = Math.min(...frontCandidateList)
            }
            else {
                frontMin = 100005
            }
        }
        k -= 1
        // console.log("===============")
    }
    return ret
    
};
