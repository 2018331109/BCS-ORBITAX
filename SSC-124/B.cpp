#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;

const int INF = 1e18;

void solve()
{
    int n, k;
    cin>>n>>k;
    unordered_map<int, int>mp;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        mp[i]=x;
    }
    //cout<<mp[5]<<" "<<mp[4]<<endl;
    for(int i=1; i<=k; i++)
    {
        int x;
        cin>>x;
        int y, z;
        cin>>y>>z;
        if(x==1)
        {
            mp[y]=z;
        }
        else
        {
            cout<<abs(mp[y]-mp[z])<<endl;
        }
    }
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

