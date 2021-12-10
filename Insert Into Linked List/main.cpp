#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* head, int pos, int val) {
    LLNode* node = new LLNode();
    node->val = val;
    if (pos == 0) {
        node->next = head;
        head = node;
        return head;
    }
    LLNode* p = head;
    for (int i = 0; i < pos - 1; i++) {
        p = p->next;
    }
    node->next = p->next;
    p->next = node;
    return head;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

