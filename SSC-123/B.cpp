#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<end;
#define pb push_back


void solve()
{

    int h, w, n;
    cin>>h>>w>>n;
    int it=0;
    int sum=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=0;
    while(it<h)
    {
        sum+=a[i];
        if(sum==w)
        {
            sum=0;
            it++;
        }
        else if(sum>w)
        {
            break;
        }


        i++;
    }
    if(it==h)
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
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

