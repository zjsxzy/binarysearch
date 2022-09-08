#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

pair<int, int> angle(int x1, int y1, int x2, int y2) {
    int dx = x1 - x2, dy = y1 - y2;
    if (dx == 0) dy = 1;
    else if (dy == 0) dx = 1;
    else {
        if (dy < 0) {
            dx = -dx; dy = -dy;
        }
        int g = gcd(abs(dx), abs(dy));
        dx /= g; dy /= g;
    }
    return {dx, dy};
}

int solve(vector<vector<int>>& coordinates) {
    int n = coordinates.size(), res = 0;
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (int i = 0; i < n; i++) {
        map<pair<int, int>, int> cnt;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            pair<int, int> p = angle(coordinates[i][0], coordinates[i][1], coordinates[j][0], coordinates[j][1]);
            cnt[p]++;
        }
        for (auto [k, v]: cnt) res = max(res, v + 1);
    }
    return res;
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

