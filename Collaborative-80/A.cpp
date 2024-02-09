#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define pb push_back

void solve()
{
       string s, t;
       cin>>s>>t;
       //vector<int>vt(26, 0), vs(26, 0);
       int n=s.size(), m=t.size();
       int ans=INT_MAX;
       for(int i=0;i+m<=n;i++)
       {
           string st=s.substr(i, m);
           int cnt=0;
           for(int j=0;j<m;j++)
           {
               if(t[j]!=st[j])
               {
                   cnt++;
               }
           }
           ans=min(ans, cnt);

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

