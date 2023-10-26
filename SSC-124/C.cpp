#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;

const int INF = 1e18;

void solve()
{
    int n, a, b, c, d;
    cin>>n>>a>>b>>c>>d;
    int s1=abs(a-c)+abs(b-d);
    int s2=0;
    int x=min(a, (n-a+1));
    int y=min(b, (n-b+1));
    int xy=min(x, y);

    x=min(c, (n-c+1));
    y=min(d, (n-d+1));
    int yz=min(x, y);

    s2=xy+yz;
    cout<<min(s1, s2)<<endl;

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

