#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s, int k) {
    int n = s.size();
    vector<bool> pos(n);
    int prev = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            if (prev == -1 || i - prev >= k) {
                pos[i] = true;
            }
        } else{
            pos[i] = false;
            prev = i;
        }
    }
    int next = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '.') {
            if ((next == -1 || next - i >= k) && pos[i]) {
                return true;
            }
        } else {
            next = i;
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

