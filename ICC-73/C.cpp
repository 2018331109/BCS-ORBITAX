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
    int n, k;
    cin>>n>>k;
    int a[k], vis[n+1]= {};
    set<int>st;
    for(int i=0; i<k; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }

    vector<int>ans;

    int last=n;
    int j=k-1;

    while(last>0)
    {
        if(st.find(last)==st.end())
        {
            ans.pb(last);
            vis[last]=1;

        }
        else if(vis[last]==0)
        {
            while(a[j]!=last)
            {
                if(vis[a[j]]==0)
                {
                    ans.pb(a[j]);
                    vis[a[j]]=1;
                }
                j--;

            }
            ans.pb(a[j]);
            vis[a[j]]=1;
        }

        last--;


    }

    for(int i=n-1; i>=0; i--)
    {
        cout<<ans[i]<<endl;
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test=1;
    //cin>>test;
    for(int t=1; t<=test; t++)
    {
        solve();
    }

}

