#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return 0;
    int m = matrix[0].size();
    if (m == 0) return 0;
    vector<int> row(n), col(m);
    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            row[i] += matrix[i][j];
            col[j] += matrix[i][j];
            s += matrix[i][j];
        }
    }
    int add = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int v = row[i] + col[j];
            int nv = (m - row[i]) + (n - col[j]);
            int t = nv - v;
            if (matrix[i][j]) {
                t += 2;
            } else {
                t -= 2;
            }
            // cout << i << ' ' << j << ' ' << v << ' ' << nv << endl;
            add = max(add, t);
        }
    }
    return s + add;
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

