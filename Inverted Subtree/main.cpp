#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

bool check(Tree* node1, Tree* node2) {
    if (!node1 && !node2) return true;
    if (!node1 || !node2) return false;
    if (node1->val != node2->val) return false;
    bool f1 = check(node1->left, node2->left) && check(node1->right, node2->right);
    bool f2 = check(node1->left, node2->right) && check(node1->right, node2->left);
    return f1 || f2;
}

bool solve(Tree* source, Tree* target) {
    if (!source && !target) return true;
    if (!source || !target) return false;
    if (check(source, target)) return true;
    return solve(source, target->left) || solve(source, target->right);
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

