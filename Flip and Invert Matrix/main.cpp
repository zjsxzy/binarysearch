#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    vector<vector<int>> res;
    int n = matrix.size();
    if (n == 0) return res;
    int m = matrix[0].size();
    vector<vector<int>> rev(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rev[i][j] = matrix[i][m - j - 1];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rev[i][j] = 1 - rev[i][j];
        }
    }
    return rev;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

