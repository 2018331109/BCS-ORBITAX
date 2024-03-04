#include<bits/stdc++.h>
using namespace std;

#define int long long
const int md = 998244353;
const int mod = 100;
const int N = 200005;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int k;
    cin >> k;

    for (int i = 0; i < s.size(); i++) {
        char it = s[i];

        if (it >= 'A' && it <= 'Z') {
            s[i] = char((it - 'A' + k) % 26 + 'A');
        } else if (it >= 'a' && it <= 'z') {
            s[i] = char((it - 'a' + k) % 26 + 'a');
        }
    }

    cout << s << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    // cin >> test;

    for (int tc = 1; tc <= test; tc++) {
        solve();
    }

    return 0;
}

