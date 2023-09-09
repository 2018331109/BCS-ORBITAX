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
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i * i;
    }

    cout << sum << endl;


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

