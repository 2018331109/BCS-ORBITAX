#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

vector<int> adj[300009];

int dfs(int cur, int par)
{
    int cnt=1;
    for(auto it:adj[cur])
    {
        if(it!=par)
        {
            cnt+=dfs(it, cur);
        }
    }
    return cnt;
}

void solve()
{
    int n, x, y;
    string s;
    cin >> n >> x >> y >> s;
    int ans = 0;
    for (int i = n - x; i < n; ++i)
    {
        if (i == n - y - 1)
        {
            ans =ans+ (s[i] != '1');
        }
        else
        {
            ans =ans+ (s[i] != '0');
        }

    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

