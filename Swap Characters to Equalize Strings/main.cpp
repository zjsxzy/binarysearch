#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s, string t) {
    vector<int> cnt(26);
    for (auto c: s) {
        cnt[c - 'a']++;
    }
    for (auto c: t) {
        cnt[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] & 1) return false;
    }
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

