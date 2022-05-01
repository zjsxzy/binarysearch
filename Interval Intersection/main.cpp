#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<vector<int>>& intervals) {
    vector<pair<int, int>> vec;
    for (auto& i: intervals) {
        vec.push_back({i[0], 1});
        vec.push_back({i[1], -1});
    }
    sort(vec.begin(), vec.end());

    vector<int> res;
    for (auto& v: vec) {
        if (v.second == 1) {
            if (!res.empty()) res.pop_back();
            res.push_back(v.first);
        } else {
            res.push_back(v.first);
            break;
        }
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

