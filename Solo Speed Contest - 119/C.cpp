#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_possible(int n, int k, vector<int>& heights, int target)
{
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        if (heights[i] < target)
        {
            cost += (target - heights[i]);
        }
    }
    return cost <= k;
}

int max_height(int n, int k, vector<int>& heights)
{
    int left = 0;
    int right = *max_element(heights.begin(), heights.end()) + k;

    while (left < right)
    {
        int mid = (left + right + 1) / 2;
        if (is_possible(n, k, heights, mid))
        {
            left = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    return left;
}

signed main()
{
    int n;
    int k;
    cin >> n >> k;

    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int result = max_height(n, k, heights);
    cout << result << endl;

    return 0;
}

