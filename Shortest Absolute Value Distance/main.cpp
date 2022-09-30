#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return 0;
    int m = matrix[0].size();
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    vector<vector<int>> d(n, vector<int>(m, (int)1e9));
    d[0][0] = 0;
    priority_queue<pair<int, pair<int, int>>> pq;
    pq.push({0, {0, 0}});
    while (!pq.empty()) {
        auto p = pq.top(); pq.pop();
        auto [x, y] = p.second;
        if (-p.first > d[x][y]) continue;
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                int nd = d[x][y] + abs(matrix[nx][ny] - matrix[x][y]);
                if (nd < d[nx][ny]) {
                    d[nx][ny] = nd;
                    pq.push({-nd, {nx, ny}});
                }
            }
        }
    }
    return d[n - 1][m - 1];
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

