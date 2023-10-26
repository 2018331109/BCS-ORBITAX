#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;

const int INF = 1e18;

void solve()
{

    int n, k;
    cin>>n>>k;
    int ind=0, mx=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]<=k*i)
        {
            continue;
        }
        int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(a[j] == a[i]+k*(j-i))
            {
                cnt++;
            }
        }

        if(cnt>mx)
        {
            mx=cnt;
            ind=i;
        }
    }

    cout<<n-mx<<endl;

    for(int i=0; i<n; i++)
    {
        if(a[i]<a[ind]+k*(i-ind))
        {
            cout << "+ " << i + 1 << ' ' << a[ind] + k * (i - ind) - a[i] << endl;
        }
        else if((a[i] > a[ind] + k * (i - ind)))
        {
            cout << "- " << i + 1 << ' ' << a[i] - (a[ind] + k * (i - ind)) << endl;
        }
    }

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

