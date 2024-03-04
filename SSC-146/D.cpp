#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int md=998244353;
const int mod=100;
const int N=200005;
vector<int>ans(N);

void solve()
{
    int n;
    cin>>n;
    vector<int>odd, even;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x%2)
        {
            odd.pb(x);
        }
        else
        {
            even.pb(x);
        }
    }

    if(odd.size()==0 or even.size()==0)
    {
        neg;
        return;
    }
    else
    {
        for(auto it:odd)
        {
            cout<<it<<" ";
        }
        for(auto it:even)
        {
            cout<<it<<" ";
        }
        cout<<endl;
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

