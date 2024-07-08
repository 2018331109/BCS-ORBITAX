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
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int bfs(const vector<string>& grid, int H, int W, int start_x, int start_y)
{
    vector<vector<int>> dist(H, vector<int>(W, INF));
    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    dist[start_x][start_y] = 0;

    int max_dist = 0;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < H && ny >= 0 && ny < W && grid[nx][ny] == '.' && dist[nx][ny] == INF)
            {
                dist[nx][ny] = dist[x][y] + 1;
                max_dist = max(max_dist, dist[nx][ny]);
                q.push({nx, ny});
            }
        }
    }

    return max_dist;
}

signed main()
{
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; ++i)
    {
        cin >> grid[i];
    }

    int max_moves = 0;
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (grid[i][j] == '.')
            {
                max_moves = max(max_moves, bfs(grid, H, W, i, j));
            }
        }
    }

    cout << max_moves << endl;

    return 0;
}

