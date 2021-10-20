#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool is_lower(char c) {
    return c >= 'a' && c <= 'z';
}
bool solve(string s) {
    int n = s.size();
    string t = "";
    for (auto c: s) {
        if (is_lower(c)) t += c;
    }
    n = t.size();
    int l = 0, r = n - 1;
    while (l < r) {
        if (t[l] != t[r]) return false;
        l++; r--;
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

