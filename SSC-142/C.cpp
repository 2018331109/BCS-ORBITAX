#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int InF = 1e18;
const int N = 1e5+5;

void solve()
{
     int n;
     cin>>n;
     if(n==1)
     {
         cout<<1<<endl;
         return;
     }
     int mx=1;
     while(mx<n)
     {
         mx*=2;
     }

     int ans=0;

     if(mx==n)
     {
         ans=mx/2;
     }
     else
     {
         mx/=2;
         ans=max(n-mx+1, mx/2);
     }

     cout<<ans<<endl;
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

