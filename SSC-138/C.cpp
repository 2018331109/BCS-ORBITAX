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
    string a, b;
    cin>>a>>b;
    int n=a.size(), m=b.size();
    int cnt=0;int ans=0;
    for(int i=m-1;b[i];i--)
    {
        if(b[i]=='1')
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    for(int i=n-1-cnt;a[i];i--)
    {
        if(a[i]=='1')
        {
            break;
        }
        else
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

