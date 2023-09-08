#include <iostream>
#include <vector>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    int l, r;
    cin>>l>>r;
    int a[n]= {};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0)
        {
            a[i]+=a[i-1];
        }

    }

    if(l==0)
    {
        cout<<a[r]<<endl;
        return;
    }

    cout<<a[r]-a[l-1]<<endl;
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

