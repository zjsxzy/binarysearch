#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return 0;
    int m = matrix[0].size();
    int res = 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (matrix[r][c] == 0) continue;
            bool flag = true;
            for (int j = 0; j < m; j++) {
                if (j == c) continue;
                if (matrix[r][j] == 1) {
                    flag = false;
                    break;
                }
            }
            for (int i = 0; i < n; i++) {
                if (i == r) continue;
                if (matrix[i][c] == 1) {
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

