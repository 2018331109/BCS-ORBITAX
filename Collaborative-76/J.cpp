#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<endl;
#define pb push_back


int lcs(string s1, string s2)
{
    int m=s1.length(), n=s2.length();
    vector<vector<int>>dp(m+1, vector<int>(n+1, 0));

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[m][n];
}

void solve()
{

    string s1="abcdefghijklmnopqrstuvwxyz";
    string s2;
    cin>>s2;
    int  ans=lcs(s1, s2);
    cout<<26-ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    // cin >> test;

    for(int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

