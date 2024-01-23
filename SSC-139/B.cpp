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
   string s, t;
   cin>>s>>t;
   int n=133;
   vector<int>v(n, 0);
   for(auto it:s)
   {
       v[it-'A']++;
   }
   int cnt=0;
   for(auto it:t)
   {
       if(v[it-'A']>0)
       {
           cnt++;
       }
   }

   cout<<cnt<<endl;


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

