#include<bits/stdc++.h>
using namespace std;
#define int long long


bool cmp(int a,int b)
{
    return a>b;
}

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(i=1; i<n; i++)
    {
        if((a[i]-a[i-1])%2!=0)
            break;
    }
    if(i==n)
        printf("yes\n");
    else
        printf("no\n");
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

