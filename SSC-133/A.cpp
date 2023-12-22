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
    int n;
    cin >> n;

    cout<<(n*15)<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

