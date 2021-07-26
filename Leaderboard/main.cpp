#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++) {
        vec.emplace_back(nums[i], i);
    }
    sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
        return a.first > b.first;
    });
    vector<int> res(n);
    if (n == 0) return res;
    res[vec[0].second] = 0;
    int cur = vec[0].first, rank = 0;
    for (int i = 1; i < n; i++) {
        if (vec[i].first != vec[i - 1].first) {
            rank++;
        }
        res[vec[i].second] = rank;
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

