def solve():
    s = input()
    t = input()
    n = len(s)
    for i in range(n):
        st = s[:i]
        ts = s[i:]
        sst = ts + st
        if sst == t:
            print("Yes")
            return
    print("No")

if __name__ == "__main__":
    test = 1
    # test = int(input())
    for tc in range(1, test + 1):
        solve()

