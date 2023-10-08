def solve():
    n, k = map(int, input().split())
    mp = {}
    arr = list(map(int, input().split()))

    for x in arr:
        mp[x] = mp.get(x, 0) + 1

    if len(mp) <= k:
        print(0)
        return

    f = list(mp.values())
    f.sort()
    ans = 0
    for i in range(len(f) - k):
        ans += f[i]

    print(ans)

if __name__ == "__main__":
    test = 1
    # test = int(input())
    for tc in range(1, test + 1):
        solve()

