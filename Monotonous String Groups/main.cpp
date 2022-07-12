#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(string s) {
    int n = s.size();
    if (n == 0) return 0;
    int res = 0, d = 0;
    string t;
    for (auto c: s) {
        if (t.size() == 0) {
            t += c;
        } else if (t.size() == 1) {
            if (c > t[0]) {
                d = 1;
            } else if (c < t[0]) {
                d = -1;
            } else {
                d = 0;
            }
            t += c;
        } else {
            if (d >= 0 && c >= t[t.size() - 1]) {
                if (c > t[t.size() - 1]) d = 1;
                t += c;
            } else if (d <= 0 && c <= t[t.size() - 1]) {
                if (c < t[t.size() - 1]) d = -1;
                t += c;
            } else {
                t = "";
                t += c;
                res++;
            }
        }
        // cout << t << ' ' << d << ' ' << res << endl;
    }
    return res + 1;
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

