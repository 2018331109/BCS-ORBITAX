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
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int mod = 1e9+7;
int test;

void solve()
{
    string s;
    int m;
    cin>>s;
    cin>>m;
    int n=s.size();
    if(m>n)
    {
        cout<<"impossible"<<endl;
        return;
    }
    set<char>st;
    for(auto it:s)
    {
        st.insert(it);
    }

    int k=st.size();
    int ans=max(m-k, (int)0);
    cout<<ans<<endl;



}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    for(test=1; test<=t; test++)
    {
        solve();
    }
}

