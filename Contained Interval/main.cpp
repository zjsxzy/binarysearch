#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool cmp(vector<int>& a, vector<int>& b) {
    if (a[0] == b[0]) return a[1] >= b[1];
    return a[0] < b[0];
}
bool solve(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), cmp);
    int n = intervals.size();
    int max_val = INT_MIN;
    for (auto p: intervals) {
        if (p[1] <= max_val) return true;
        max_val = p[1];
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

