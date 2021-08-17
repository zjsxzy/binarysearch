#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s0, string s1) {
    for (auto &c: s0) {
        c = tolower(c);
    }
    for (auto &c: s1) {
        c = tolower(c);
    }
    
    int pos;
    set<string> st;
    while ((pos = s0.find(' ')) != string::npos) {
        string t = s0.substr(0, pos);
        st.insert(t);
        s0.erase(0, pos + 1);
    }
    if (s0.size() > 0) st.insert(s0);
    
    set<string> st1;
    while ((pos = s1.find(' ')) != string::npos) {
        string t = s1.substr(0, pos);
        st1.insert(t);
        s1.erase(0, pos + 1);
    }
    if (s1.size() > 0) st1.insert(s1);

    int res = 0;
    for (auto &s: st1) {
        if (st.find(s) != st.end()) res++;
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

