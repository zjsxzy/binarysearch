#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    int n = nums.size();
    map<int, int> cnt;
    for (auto x: nums) {
        cnt[x]++;
    }
    vector<int> freq;
    for (auto [k, v]: cnt) {
        freq.push_back(v);
    }
    sort(freq.begin(), freq.end());
    int g = freq[0];
    for (auto x: freq) {
        g = gcd(g, x);
    }
    return g >= 2;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

