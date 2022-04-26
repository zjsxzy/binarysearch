#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<vector<int>>& intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), [&](const vector<int>& a, const vector<int>& b) {
        if (a[1] != b[1]) return a[1] < b[1];
        return a[0] < b[0];
    });
    int mn = 1e9, res = 2e9;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < i && intervals[j][1] < intervals[i][0]) {
            mn = min(mn, intervals[j][1] - intervals[j][0] + 1);
            j++;
        }
        res = min(res, intervals[i][1] - intervals[i][0] + 1 + mn);
    }
    return res >= 1e9 ? 0 : res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

