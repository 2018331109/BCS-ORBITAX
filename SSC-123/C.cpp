#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<end;
#define pb push_back


void solve()
{
    string s;
    cin>>s;
    map<int, int>mp;
    for(auto it:s)
    {
        mp[it-'0']++;
    }
    char ch='A';
    int it=65;
    string ans="";
    while(it<=90)
    {
        int a=it%10;
        int b=it/10;
        if(mp.count(a)>0 && mp.count(b)>0)
        {
            if(a==b)
            {
                if(mp[a]>=2)
                {
                    ans+=ch;
                }

            }
            else
            {
                ans+=ch;
            }

        }

        ch++;
        it++;
    }
    cout<<ans<<endl;
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

