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
    string s, t;
    cin>>s;
    t=s;
    for(char &it:t)
    {
        if(it=='a')
        {
            it='z';
        }
        else
        {
            it--;
        }
    }
    int i=0;
    int n=s.size();
    string ans;
    while(i<n)
    {
        if(t[i]<s[i])
        {
            break;
        }
        ans+=s[i];
        i++;
    }

    if(i==n)
    {
        ans[n-1]=t[n-1];
        cout<<ans<<endl;
        return;
    }
    while(i<n and t[i]<s[i])
    {
        ans+=t[i];
        i++;
    }

    while(i<n)
    {
        ans+=s[i];
        i++;
    }
    cout<<ans<<endl;


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

