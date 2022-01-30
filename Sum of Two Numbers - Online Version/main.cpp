#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

class TwoSum {
    public:
    vector<int> nums;
    TwoSum() {
        nums.clear();
    }

    void add(int val) {
        nums.push_back(val);
    }

    bool find(int val) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = n - 1;
        while (i < j) {
            if (nums[i] + nums[j] == val) {
                return true;
            } else if (nums[i] + nums[j] < val) {
                i++;
            } else {
                j--;
            }
        }
        return false;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

