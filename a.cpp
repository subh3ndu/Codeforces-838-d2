#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Divide and Conquer

void solve() {
    int n;
    cin >> n;
    ll sum = 0; 
    vector<int> a(n);
    for(auto &x : a) {
        cin >> x;
        sum += x;
    }

    ll ans = 1e9;
    if(sum & 1) {
        for(auto &it : a) {
            ll cur = it, now = 0;
            while(!((cur + it)&1)) {
                now++;
                cur /= 2;
            }
            ans = min(ans, now);
        }
    } else 
        ans = 0;

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) 
        solve();

    return 0;
}
