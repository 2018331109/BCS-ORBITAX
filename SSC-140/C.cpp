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
    string s;
    cin>>s;
    string ans="keyence";

    int n=s.size();
    int m=n-7;
    if(m<0)
    {
        no;
        return;
    }

    for(int i=0; i+m<n; i++)
    {
        string temp=s.substr(0,i)+s.substr(i+m);
        if(temp==ans)
        {
            yes;
            return;
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

