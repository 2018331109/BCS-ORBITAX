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
    vector<int>v(26, 0);
    for(int i=0;i<26;i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    vector<int>fr(26, 0);
    for(auto it:s)
    {
        fr[it-'a']++;
    }
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(fr[i]==0)
        {
            ans+=v[i];
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
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

