#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

class RangeSum {
    public:
    vector<int> sum;
    RangeSum(vector<int>& nums) {
        int n = nums.size();
        sum.resize(n);
        sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + nums[i];
        }
    }

    int total(int i, int j) {
        if (i == 0) return sum[j - 1];
        return sum[j - 1] - sum[i - 1];
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

