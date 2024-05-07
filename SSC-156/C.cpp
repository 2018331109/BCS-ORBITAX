#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=1000066;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int a=0, b=0;
    for(auto it:s)
    {
        if(it=='1')
        {
            a++;
        }
    }
    b=min(a, n-a);
    a=max(a, n-a);

    if(b%2)
    {
        cout<<"Zlatan"<<endl;
    }
    else
    {
        cout<<"Ramos"<<endl;
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

