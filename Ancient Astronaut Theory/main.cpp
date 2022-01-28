#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string dictionary, string s) {
    int len = dictionary.size();
    if (len == 0) return true;
    int i = 0;
    for (auto c: s) {
        if (dictionary.find(c) != string::npos) {
            while (i < len && dictionary[i] != c) {
                i++;
            }
            if (i >= len || dictionary[i] != c) {
                return false;
            }
        }
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

