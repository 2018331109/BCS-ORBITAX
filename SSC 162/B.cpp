#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

vector<int>v(130, 0);
int call(int n)
{
    int x=v[n], cnt=0;
    for(int i=1; i<=n; i++) cnt+=(v[i]==x);
    return cnt;
}

void solve()
{
    int n;
    cin>>n;
    int ans=call(n);
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    v[1]=0, v[2]=0;
    for(int i=3; i<=129; i++)
    {
        int x=v[i-1];
        int ind=-1;
        int j=i-2;
        while(j>=0)
        {
            if(v[j]==x)
            {
                ind=j;
                break;
            }
            j--;
        }
        if(ind==-1) v[i]=0;
        else v[i]=i-1-ind;
    }

    int test=1;
    cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

