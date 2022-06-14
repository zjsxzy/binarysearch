#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums, int k) {
    vector<int> bits(30);
    long long sum = 0;
    int mod = 1000000007;
    for (auto x: nums) {
        for (int i = 0; i < 30; i++) {
            if (!(x >> i & 1)) bits[i]++;
        }
        sum = (sum + x) % mod;
    }
    int curr = k;
    for (int i = 0; i < 30; i++) {
        if (bits[i] <= curr) {
            sum = (sum + 1ll * (1 << i) * bits[i]) % mod;
            curr -= bits[i];
        } else {
            sum = (sum + 1ll * (1 << i) * curr) % mod;
            break;
        }
    }
    return sum % mod;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

