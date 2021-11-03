#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<vector<int>>& votes) {
    int n = votes.size();
    map<int, int> cnt;
    for (auto v: votes) {
        cnt[v[1]]++;
    }
    for (auto [k, v]: cnt) {
        if (v > 1) return true;
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

