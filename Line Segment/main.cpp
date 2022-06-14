#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool solve(vector<vector<int>>& coordinates) {
    int n = coordinates.size();
    if (n == 1) return false;
    if (n == 2) return true;
    auto cross = [&](int i) {
        return (coordinates[1][0] - coordinates[0][0]) * (coordinates[i][1] - coordinates[0][1]) -\
               (coordinates[1][1] - coordinates[0][1]) * (coordinates[i][0] - coordinates[0][0]);
    };
    for (int i = 2; i < n; i++) {
        if (cross(i) != 0) return false;
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

