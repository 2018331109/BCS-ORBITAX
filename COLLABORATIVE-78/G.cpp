#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
     int n, d;
     pair<int, int>pi[n];
     cin>>n>>d;
     for(int i=0;i<n;i++)
     {
         cin>>pi[i].ff>>pi[i].ss;
     }
     sort(pi, pi+n);
     int j=0;
     int mx=0;
     int ans=0;
     for(int i=0;i<n;i++)
     {
         if(pi[i].ff-pi[j].ff<d)
         {
             mx=mx+pi[i].ss;
             ans=max(ans, mx);
         }
         else
         {
             mx=mx-pi[j++].ss;
             i--;
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

