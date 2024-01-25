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
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0, ans=0;
    for(auto it:s)
    {
        if(it=='*')
        {
            cnt++;
            ans=max(ans, cnt);
        }
        else
        {
            cnt=0;
        }
    }

    if(ans>=k)
    {
        yes;
    }
    else
    {
        no;
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

