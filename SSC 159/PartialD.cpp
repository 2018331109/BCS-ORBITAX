#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;

void solve()
{
    int aa, bb, n;
    cin>>aa>>bb>>n;
    int a=min(aa, bb);
    int b=max(aa, bb);
    int mx=0;
    int cnt=0;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    int total=0;
    while(b>0)
    {
        if(b%2==1 and a%2==0)
        {
            total+=(1<<cnt);
            mx=1<<cnt;
        }
        cnt++;
        a/=2, b/=2;
    }
    if(mx>=n)
    {
        neg;
        return;
    }
    //cout<<total<<endl;
    if(total<n)
    {
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;

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

