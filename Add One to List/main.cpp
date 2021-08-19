#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    reverse(nums.begin(), nums.end());
    nums[0] += 1;
    int n = nums.size();
    for (int i = 0; nums[i] >= 10; i++) {
        if (i + 1 < n) {
            nums[i] -= 10;
            nums[i + 1]++;
        } else {
            nums[i] -= 10;
            nums.push_back(1);
            break;
        }
    }
    reverse(nums.begin(), nums.end());
    return nums;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

