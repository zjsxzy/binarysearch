#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& heights) {
    int ht = -1, n = heights.size();
    vector<int> res;
    for (int i = n - 1; i >= 0; i--) {
        if (heights[i] > ht) res.push_back(i);
        ht = max(ht, heights[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

