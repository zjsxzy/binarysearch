#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool check(vector<int>& nums, int window, int k) {
    unordered_map<int, int> freq;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
        if (freq[nums[i]] >= window - k) return true;
        if (i >= window - 1) freq[nums[i - window + 1]]--;
    }
    return false;
}

int solve(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return 0;
    int lo = 0, hi = n;
    while (lo <= hi) {
        int mid = (lo + hi) >> 1;
        if (check(nums, mid, k)) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return hi;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

