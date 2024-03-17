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
    string s;
    cin>>s;
    s="#"+s;
    vector<pair<int, int>>ans;
    int f=0;
    for(int i=n; i>=1; i--)
    {
        if(f==0 and s[i]=='0')
        {
            ans.pb({1, i});
            f^=1;
        }
        else if(s[i]=='1' and f==1)
        {
            ans.pb({1, i});
            f^=1;
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it.ff<<" "<<it.ss<<endl;
    }

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

