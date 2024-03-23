#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v(26, 0);
    for (char ch : s)
    {
        v[ch - 'a']++;
    }

    //sort(v.begin(), v.end());
    int mx=*max_element(v.begin(), v.end());

    if (n % 2 || mx > (n + 1) / 2)
    {
        cout << "NO\n";
        return;
    }

    string ans = "";
    int cnt = 0;
    int i = 0;

    // First, print characters from the first half of the frequency array
    while (cnt < (n / 2))
    {
        while (v[i] && cnt < (n / 2))
        {
            ans += (char)('a' + i);
            cnt++, v[i]--;
        }
        i++;
    }

    // Then, print characters from the second half of the frequency array
    i = 25;
    while (cnt < n)
    {
        while (v[i] && cnt < n)
        {
            ans += (char)('a' + i);
            cnt++, v[i]--;
        }
        i--;
    }

    cout << "YES\n";
    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

