#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=3e5+5;

void solve()
{
    int n, m;
    cin>>n>>m;
    char matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int f=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(matrix[i][j]!='#' and matrix[i][j-1]!='#' and matrix[i+1][j]!='#' and matrix[i+1][j-1]!='#')
            {
                matrix[i][j]='*', matrix[i][j-1]='*', matrix[i+1][j]='*', matrix[i+1][j-1]='*';
            }
        }
    }
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//           cout<<matrix[i][j];
//        }
//        cout<<endl;
//    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j]=='.')
            {
                no;
                return;
            }
        }
    }
    yes;
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

