#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    if (n == 0) return 0;
    int start = intervals[0][0], end = intervals[0][1];
    int res = end - start + 1;
    for (int i = 1; i < n; i++) {
        if (intervals[i][0] <= end) {
            end = max(end, intervals[i][1]);
        } else {
            res = max(res, end - start + 1);
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    res = max(res, end - start + 1);
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

