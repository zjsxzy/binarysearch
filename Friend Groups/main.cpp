#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int find(int x, vector<int>& f) {
    if (f[x] == x) return x;
    return f[x] = find(f[x], f);
}

int solve(vector<vector<int>>& friends) {
    int n = friends.size();
    vector<int> f(n);
    for (int i = 0; i < n; i++) {
        f[i] = i;
    }
    for (int i = 0; i < n; i++) {
        for (auto j: friends[i]) {
            int x = find(i, f), y = find(j, f);
            if (x != y) f[x] = y;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += f[i] == i;
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

