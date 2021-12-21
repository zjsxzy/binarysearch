#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<string>& shows, vector<int>& durations, int k) {
    int n = shows.size();
    map<string, int> ti;
    for (int i = 0; i < n; i++) {
        ti[shows[i]] += durations[i];
    }
    vector<pair<int, string>> vec;
    for (auto& [k, v]: ti) {
        vec.emplace_back(-v, k);
    }
    sort(vec.begin(), vec.end());
    int res = 0;
    for (int i = 0; i < k; i++) {
        if (i >= vec.size()) break;
        res += -vec[i].first;
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

