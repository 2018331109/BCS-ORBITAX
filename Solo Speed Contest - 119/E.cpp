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
    int waterA, waterB, sugarC, sugarD, dissolve, capacityF;
    cin >> waterA >> waterB >> sugarC >> sugarD >> dissolve >> capacityF;

    vector<vector<bool>> possible(capacityF + 1, vector<bool>(capacityF + 1, false));
    possible[0][0] = true;

    for (int i = 0; i <= capacityF; i++)
    {
        for (int j = 0; j <= capacityF; j++)
        {
            if (!possible[i][j]) continue;

            int currentWater = i - j;

            if (i + 100 * waterA <= capacityF)
            {
                possible[i + 100 * waterA][j] = true;
            }
            if (i + 100 * waterB <= capacityF)
            {
                possible[i + 100 * waterB][j] = true;
            }

            if (i + sugarC <= capacityF && j + sugarC <= capacityF)
            {
                possible[i + sugarC][j + sugarC] = true;
            }

            if (i + sugarD <= capacityF && j + sugarD <= capacityF)
            {
                possible[i + sugarD][j + sugarD] = true;
            }

        }
    }

    int maxWater = 0, maxSugar = 0;

    pair<int, int> mxc = {0, 0};

    for (int i = 0; i <= capacityF; i++)
    {
        for (int j = 0; j <= capacityF; j++)
        {
            if (possible[i][j])
            {

                int currentLiquid = i - j;
                if (j * 100 <= dissolve * currentLiquid)
                {

                    pair<int, int> concentration = {j, i};

                    if (mxc.first * concentration.second <= concentration.first * mxc.second)
                    {
                        maxWater = i;
                        maxSugar = j;
                        mxc = concentration;
                    }
                }
            }
        }
    }

    cout << maxWater << ' ' << maxSugar << endl;

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

