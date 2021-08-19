#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s) {
    string target = "binarysearch";
    for (int d = 1; d <= s.size(); d++) {
        for (int i = 0; i + d * (target.size() - 1) < s.size(); i++) {
            string temp;
            for (int j = 0; j < target.size(); j++) {
                temp += s[i + j * d];
            }
            if (temp == target) return true;
        }
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

