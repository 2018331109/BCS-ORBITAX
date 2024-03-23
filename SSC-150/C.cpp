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
int total=0, mx=0, n, m;

void solve()
{
    int n, m;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        int f=0;
        for(int j=0; j<n; j++)
        {
            if(a[i][j]==0)
            {
                f=1;
            }
        }
        if(f==0)
        {
            no;
            return;
        }
    }
    for(int j=0; j<n; j++)
    {
        int f=0;
        for(int i=0; i<n; i++)
        {
            if(a[i][j]==0)
            {
                f=1;
            }
        }
        if(f==0)
        {
            no;
            return;
        }
    }

    yes;
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

