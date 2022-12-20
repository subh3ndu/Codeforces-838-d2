#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Make Array Good

ll foo(ll x) {
    ll cur = 1;
    while(cur <= x) {
        cur *= 2;
    }

    return cur;
}

void solve() {
    int n;
    cin >> n;
    cout << n << "\n";
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cout << i << " " << foo(x) - x << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
