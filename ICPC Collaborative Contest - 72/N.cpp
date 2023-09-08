#include<bits/stdc++.h>
using namespace std;
#define int long long


bool cmp(int a,int b)
{
    return a>b;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    int x=2;
    if(k==0)
    {
        puts("-1");
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(i==k)
        {
            printf("1 ");
        }
        else
        {
            printf("%d ",x++);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

