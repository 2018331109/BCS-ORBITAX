#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N = 200005;

void solve()
{
    int n;
    cin>>n;
    int ans=-1;
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;

    }
    for(auto it:mp)
    {
        if(it.ss==1)
        {
            ans=it.ff;
        }
    }

    cout<<ans<<endl;

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

