#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(int num) {
    vector<int> arr;
    while (num) {
        arr.emplace_back(num % 10);
        num /= 10;
    }
    for (int i = 0; i < arr.size() / 2; i++) {
        if (arr[i] != arr[arr.size() - 1 - i]) return false;
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

