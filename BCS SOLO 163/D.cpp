#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

void solve()
{
    int n;
    int k;
    cin>>n>>k;
    int a[k];
    int y=0;
    for(int i=0; i<k; i++)
    {
        cin>>a[i];
        int x=a[i];
        while(x>y) cout<<x--<<" ";
        y=a[i];
    }
    int x=n;
    while(x>y) cout<<x--<<" ";
    cout<<endl;

}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

