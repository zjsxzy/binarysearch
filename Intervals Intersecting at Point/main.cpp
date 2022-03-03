#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<vector<int>>& intervals, int point) {
    vector<pair<int, int>> vec;
    for (auto& i: intervals) {
        vec.push_back({i[0], i[1]});
    }
    sort(vec.begin(), vec.end());
    int n = vec.size();
    if (n == 0) return 0;
    int l = vec[0].first, r = vec[0].second;
    int res = 0;
    if (l <= point && point <= r) res++;
    for (int i = 1; i < n; i++) {
        if (vec[i].first > point) break;
        if (point <= vec[i].second) res++;
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

