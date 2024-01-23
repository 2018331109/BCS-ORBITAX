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
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int m=n/2;
    int total=a[n-1]+a[n-2];
    vector<int>v;
    int l=0, r=n-1;
    int f=0;
    while(l<r)
    {
        v.pb(a[r--]);
        v.pb(a[l++]);
    }
    if(l==r)
    {
        v.pb(a[l]);
    }
/*
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
*/
    for(int i=0; i<n-1; i++)
    {
        int sum=v[i]+v[i+1];
        if(sum>=total)
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

