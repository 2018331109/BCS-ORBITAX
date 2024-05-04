#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=200005;

void solve()
{
    int a[4]= {};
    int n, m;
    cin>>n>>m;
    int f=0;
    for(int i=0; i<m; i++)
    {
        int si, ci;
        cin>>si>>ci;
        if(a[si] and a[si]!=ci)
        {
            f=1;
        }
        if(si==1 and ci==0 and n>1)
        {
            f=1;
        }
        a[si]=ci;
    }
    if(f)
    {
        neg;
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]==0 and i==1 and n>1)
        {
            cout<<1;
        }
        else
        {
            cout<<a[i];
        }
    }
    cout<<endl;
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

