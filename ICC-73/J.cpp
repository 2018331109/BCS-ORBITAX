#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;
int m,a[200005];

// Function to calculate a^n modulo mod
int power(int a, int n)
{
    a %= mod;
    if (n == 0) return 1;
    int s = power(a * a, n / 2) % mod;
    if (n % 2 == 1) return a * s % mod;
    else return s % mod;
}


void solve()
{
    cin >> m;
    map<int,int> dem; // A map to store the frequency of prime factors

    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
        dem[a[i]]++; // Count the occurrences of each prime factor
    }

    int tmp = 1, ans = 1;
    for(auto x : dem)
    {
        int d = x.first; // Prime factor
        int e = x.second; // Frequency of the prime factor
        int f = power(d, e * (e + 1) / 2); // Calculate d^(e*(e+1)/2)

        // Update the answer using modular exponentiation
        ans = power(ans, e + 1) * power(f, tmp) % mod;
        tmp = tmp * (e + 1) % (mod - 1); // Update tmp using modular arithmetic
    }

    cout << ans; // Output the final result
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

