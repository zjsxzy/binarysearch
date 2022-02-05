#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool check(string s) {
    map<char, int> freq;
    for (auto c: s) freq[c]++;
    for (auto& [k, v]: freq) {
        if (v > 1) return true;
    }
    return false;
}

int solve(string s) {
    int n = s.size();
    int res = n + 1;
    for (int i = 0; i < n; i++) {
        if (i + 2 <= n) {
            string t = s.substr(i, 2);
            if (check(t)) return 2;
        }
        if (i + 3 <= n) {
            string t = s.substr(i, 3);
            if (check(t)) res = min(res, 3);
        }
    }
    if (res == n + 1) return -1;
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

