#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;

    const int N = 3e5 + 9;
    vector<int> v(N);

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }

    vector<int> visited(n + 1, 0);
    int current_position = 1;
    visited[current_position] = 1;

    while (k--)
    {
        current_position = v[current_position];
        if (visited[current_position])
        {
            break;
        }
        visited[current_position] = 1;
    }

    if (k <= 0)
    {
        cout << current_position << '\n';
        return 0;
    }

    vector<int> cycle = {current_position};
    int temp = current_position;
    current_position = v[current_position];

    while (current_position != temp)
    {
        cycle.push_back(current_position);
        current_position = v[current_position];
    }

    k %= cycle.size();
    cout << cycle[k] << '\n';

    return 0;
}

