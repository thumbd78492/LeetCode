class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int N = M.size(), res = N;
        vector<int> rec(N,0);
        for (int i=0; i<N; ++i)
            rec[i] = i;
        for (int i=0; i<=N-2; ++i){
            for(int j=i+1; j<N; ++j){
                if (M[i][j]==0)
                    continue;
                int prede1 = Find(rec,i);
                int prede2 = Find(rec,j);
                //cout << i << "," << j << ":" << prede1 << "," << prede2 << endl;
                if (prede1 != prede2) {
                    rec[prede2] = prede1;
                    res--;
                }
            }
        }
        return res;
    }
private:
    int Find(vector<int> &rec,int idx){
        cout << rec[idx] << "," << idx << "," << Find(rec, rec[idx]) << endl;
        return rec[idx] == idx ? idx : Find(rec, rec[idx]);
    }
};
