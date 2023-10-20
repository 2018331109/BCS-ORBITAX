#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<endl;
#define pb push_back




void solve()
{

    string s;
    cin>>s;
    int n=s.size();
    string ss=s;

    string l=s.substr(0, (n/2));
    string r=s.substr((n+1)/2);

    string ll=l, rr=r;

    reverse(ll.begin(), ll.end());
    reverse(rr.begin(), rr.end());
    reverse(ss.begin(), ss.end());
    if(l==ll && r==rr && s==ss)
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
    // cin >> test;

    for(int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

