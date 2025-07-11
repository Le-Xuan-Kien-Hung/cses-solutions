#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 50000 + 7;
const int MOD = 1e9 + 7;

int n, q;
string s;

int conv(char c) {
    if (c == 'V') return 0;
    if (c == 'O') return 1;
    if (c == 'I') return 2;
    if (c == '2') return 3;
    if (c == '6') return 4;
    return 0;
}

struct node {
    int F[5][5];
    node() {
        memset(F, 0, sizeof(F));
    }
} t[maxN * 4];

void add(int &a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
}

int mul(int a, int b) {
    return (1LL * (a % MOD) * (b % MOD)) % MOD;
}

node operator+(const node &a, const node &b) {
    node res;
    for (int l = 0; l < 5; l++) {
        for (int r = 0; r < 5; r++) {
            res.F[l][r] = (a.F[l][r] + b.F[l][r]) % MOD;
            for (int m = 0; m < 5; m++) {
                if (m + 1 < 5) {
                    res.F[l][r] = (res.F[l][r] + mul(a.F[l][m], b.F[m + 1][r])) % MOD;
                }
            }
        }
    }
    return res;
}

void build(int id, int l, int r) {
    if (l == r) {
        t[id].F[conv(s[l])][conv(s[l])]++;
        return;  
    }
    int m = (l + r) >> 1;
    build(id << 1, l, m);
    build(id << 1 | 1, m + 1, r);
    t[id] = t[id << 1] + t[id << 1 | 1];
}

node get(int id, int l, int r, int u, int v) {
    if (r < u || l > v) return node();
    if (u <= l && r <= v) return t[id];
    int m = (l + r) >> 1;
    return get(id << 1, l, m, u, v) + get(id << 1 | 1, m + 1, r, u, v);
}

void solve() {
    cin >> n >> q >> s;
    s = '?' + s;
    build(1, 1, n);
    while (q--) {
        int l, r;
        cin >> l >> r;
        node ans = get(1, 1, n, l, r);
        cout << ans.F[0][4] << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int numTest = 1;
    while (numTest--) solve();
    return 0;
}
