#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool flag = true;
            for (int k = 0; k < m; k++) {
                if (matrix[i][k] > matrix[i][j]) {
                    flag = false;
                    break;
                }
            } 
            for (int k = 0; k < n; k++) {
                if (matrix[k][j] > matrix[i][j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) res++;
        }
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

