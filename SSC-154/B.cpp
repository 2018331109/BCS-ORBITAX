#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=3e5+5;

void solve()
{
    int n, T;
    cin>>n>>T;
    int ans=INT_MAX;
    for(int i=0; i<n; i++)
    {
        int c, t;
        cin>>c>>t;
        if(t<=T)
        {
            ans=min(ans, c);
        }
    }
    if(ans==INT_MAX)
    {
        cout<<"TLE"<<endl;
        return;
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

