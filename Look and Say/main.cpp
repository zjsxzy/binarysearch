#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

string solve(int n) {
    string s = "1";
    for (int i = 1; i < n; i++) {
        vector<pair<int, char>> v;
        int idx = -1;
        for (int j = 0; j < s.size(); j++) {
            if (j == 0 || s[j] != s[j - 1]) {
                v.push_back({1, s[j]});
                idx++;
            } else {
                v[idx].first++;
            }
        }
        s = "";
        for (auto x: v) {
            s = s + char('0' + x.first) + x.second;
        }
    }
    return s;
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

