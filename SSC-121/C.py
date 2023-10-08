MOD = 10**9 + 7

def expo(x, y):
    res = 1
    x %= MOD
    while y > 0:
        if y & 1:
            res = (res * x) % MOD
        y = y >> 1
        x = (x * x) % MOD
    return res

def solve():
    n = int(input())
    result = (expo(10, n) - (2 * expo(9, n)) + expo(8, n) + (2 * MOD)) % MOD
    print(result)

 
solve()
 

