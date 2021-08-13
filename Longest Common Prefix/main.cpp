#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string common(string a, string b) {
    if (a.size() > b.size()) {
        string t = a; a = b; b = t;
    }
    int sz = a.size();
    for (int i = 0; i < sz; i++) {
        if (a[i] != b[i]) return a.substr(0, i);
    }
    return a;
}

string solve(vector<string>& words) {
    int n = words.size();
    if (n == 0) return "";
    string prefix = words[0];
    for (int i = 1; i < n; i++) {
        prefix = common(prefix, words[i]);
    } 
    return prefix;
}

int main() {
    freopen("in.txt", "r", stdin);
    solve();
    return 0;
}

