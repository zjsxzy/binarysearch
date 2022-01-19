#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<string> solve(string s) {
    int n = s.size();
    map<vector<int>, vector<string>> mp;
    for (int i = 0; i < n; i++) {
        for (int l = 1; i + l <= n; l++) {
            string t = s.substr(i, l);
            vector<int> cnt(26);
            for (auto c: t) {
                cnt[c - 'a']++;
            }
            mp[cnt].push_back(t);
        }
    }
    vector<string> res;
    for (auto& [k, v]: mp) {
        if (v.size() > 1) {
            for (auto t: v) {
                res.push_back(t);
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

