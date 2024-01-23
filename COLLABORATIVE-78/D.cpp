#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
    int X;
    cin >> X;
    int k = 0;  // Variable to store the number of points
    // Find the prime factorization of X
    for (int i = 2; i * i <= X; ++i)
    {
        while (X % i == 0)
        {
            X /= i;
            ++k;  // Increase the number of points for each distinct prime factor
        }
    }
    // If X is a prime number greater than 1
    if (X > 1)
    {
        ++k;  // Increase the number of points
    }

    cout << k << endl;

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

