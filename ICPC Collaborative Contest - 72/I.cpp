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
    cin >> n;
    string initial, target;
    cin >> initial >> target;

    string s(n, '0');
    int operations = 0;

    for (int i = 0; i < n; i++)
    {
        if (initial[i] != target[i])
        {
            s[i] = '1';
            operations++;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1' && s[i - 1] == '1')
        {
            operations--;
        }
    }

    cout << operations << endl;
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

