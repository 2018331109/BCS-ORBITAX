def solution(a, n):
    ind, mn = 0, a[0]
    for i in range(1, n):
        if mn > a[i]:
            mn = a[i]
            ind = i
    return ind + 1

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    print(solution(a, n))

if __name__ == "__main__":
    test = int(input())
    for tc in range(1, test + 1):
        solve()

