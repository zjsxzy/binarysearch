#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        string new_str = s.substr(0, i + 1);
        int num = atoi(new_str.c_str());
        while (new_str.size() < n) {
            num--;
            new_str = new_str + to_string(num);
        }
        if (new_str == s) return true;
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

