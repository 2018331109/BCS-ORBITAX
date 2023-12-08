#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;
int md = 998244353;
const int INF = 1e18;

void solve()
{
    int n, s;
    cin>>n>>s;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    if(a[0]==0)
    {
        no;
        return;
    }
    else if((a[s-1]==0 && b[s-1]==0))
    {
        no;
        return;
    }
    else
    {
        if(a[s-1]==1)
        {
            yes;
            return;
        }
        for(int i=n-1; i>=s-1; i--)
        {
            if(a[i]==1 && b[i]==1)
            {
                yes;
                return;
            }
        }
    }
    no;

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

