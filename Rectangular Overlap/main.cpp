#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& rect0, vector<int>& rect1) {
    int width = min(rect0[2], rect1[2]) - max(rect0[0], rect1[0]);
    int height = min(rect0[3], rect1[3]) - max(rect0[1], rect1[1]);
    return width > 0 && height > 0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

