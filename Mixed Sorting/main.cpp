#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> odd, even;
    for (auto x: nums) {
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.begin(), even.end());
    auto o = odd.begin(), e = even.begin();
    vector<int> res;
    for (auto x: nums) {
        if (x % 2 == 0) {
            res.push_back(*e);
            e++;
        } else {
            res.push_back(*o);
            o++;
        }
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

