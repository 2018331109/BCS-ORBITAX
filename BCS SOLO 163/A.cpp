#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void op(char &ch, int x)
{
    ch=char('0'+(ch-'0'+x)%3);
}

string ss="oxxoxxoxxoxxoxxoxxoxxoxxoxxoxx";
void solve()
{
    int n;
    string s;
    cin>>s;
    if(ss.find(s)!= string::npos){
        yes;
    }
    else no;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    //cin >> test;
    while (test--)
    {
        solve();
    }

    return 0;
}

