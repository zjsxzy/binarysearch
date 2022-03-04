#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    int res = 0;
    function<int(Tree*)> dfs = [&](Tree* root) {
        if (!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if (root->val >= max(left, right)) {
            res++;
        }
        return max({root->val, left, right});
    };
    dfs(root);
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

