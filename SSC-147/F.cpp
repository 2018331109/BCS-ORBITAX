#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#define pb push_back

const int N = 1003;
vector<int> p2i[N], i2p[N], check;
unordered_map<int, bool> mp;

int n;

void p_fact(int x, int ind)
{
    int vl = x;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            i2p[ind].pb(i);
            p2i[i].pb(ind);
            while (x % i == 0)
            {
                x /= i;
            }
        }
    }
    if (x > 1)
    {
        i2p[ind].pb(x);
        p2i[x].pb(ind);
    }
}

void dfs(int now)
{
    if (check[now])
    {
        return;
    }
    check[now] = 1;
    for (auto prime : i2p[now])
    {
        if (mp[prime])
        {
            continue;
        }
        mp[prime] = true;

        for (auto it : p2i[prime])
        {
            if (check[it])
            {
                continue;
            }
            dfs(it);
        }
    }
}

int countGroups(vector<int> &nums)
{
    n = nums.size();
    check.assign(n, 0);
    int groups = 0;

    for (int i = 0; i < n; i++)
    {
        int it = nums[i];
        p_fact(it, i);
    }

    for (int i = 0; i < n; i++)
    {
        if (!check[i])
        {
            dfs(i);
            groups++;
        }
    }

    return groups;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> nums(N - 1);
        for (int i = 0; i < N - 1; i++)
        {
            nums[i] = i + 2;
        }

        mp.clear();
        int result = countGroups(nums);

        cout << result << endl;
    }

    return 0;
}

