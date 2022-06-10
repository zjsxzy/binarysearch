#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<int> solve(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> sum(n + 1);
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + nums[i - 1];
    }
    priority_queue<int> pq;
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            pq.push(sum[r] - sum[l - 1]);
        }
    }
    vector<int> ans;
    for (int i = 0; i < k; i++) {
        auto p = pq.top(); pq.pop();
        ans.push_back(p);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

