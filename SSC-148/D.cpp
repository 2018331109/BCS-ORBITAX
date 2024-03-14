#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N = 200005;
int a[N], d[N];

void solve()
{
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    int gc=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=__gcd(gc, a[i]);
        gc=__gcd(gc, a[i]);
    }
    gc=0;
    for(int i=n-1;i>=0;i--)
    {
        c[i]=__gcd(a[i], gc);
        gc=__gcd(gc, a[i]);
    }
    int ans=0;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    int i=0;
    if(c[1]!=1)
    {
        ans++;
    }
    if(b[n-2]!=1)
    {
        ans++;
    }

    for(int i=1;i<n-1;i++)
    {
        int l=b[i-1], r=c[i+1];
        int lr=__gcd(l, r);
        if(lr!=1)
        {
            ans++;
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

