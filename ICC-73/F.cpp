#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int md = 1e9+7;

void solve()
{
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    int ans=0;
    for(int i=0; i<m; i++)
    {
        if(a[i]>=13)
        {
            if((cnt+13)%7 == 6)
            {
                ans++;
            }
        }
        cnt+=a[i];
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test=1;
    cin>>test;
    for(int t=1; t<=test; t++)
    {
        solve();
    }

}

