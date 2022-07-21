#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

string solve(string s) {
    vector<pair<char, int>> st;
    s += '#';
    for (auto c: s) {
        if (st.size() && c != st.back().first && st.back().second > 1) {
            st.pop_back();
        }

        if (st.size() && st.back().first == c) {
            int t = st.back().second;
            st.pop_back();
            st.push_back({c, t + 1});
        } else {
            st.push_back({c, 1});
        }
    }
    string res;
    for (auto p: st) {
        if (p.first == '#') break;
        res += p.first;
    }
    return res;
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

