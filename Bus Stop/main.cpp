#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    multiset<int> s;
    for (auto x: nums) {
        auto it = s.lower_bound(x);
        if (it != s.begin()) {
            it--;
            s.erase(it);
        }
        s.insert(x);
    }
    return s.size();
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

