#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string solve(string s) {
    char c = s[0];
    int num = 1, n = s.size();
    string res = "";
    for (int i = 1; i < n; i++) {
        if (s[i] != c) {
            res += to_string(num);
            res += c;
            num = 0;
        }
        c = s[i];
        num++;
    }
    res += to_string(num);
    res += c;
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

