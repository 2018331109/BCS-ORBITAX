def solve():
    n = int(input())
    print((n * (n + 1)) // 2)

def main():
    test = 1
    # test = int(input())
    for tc in range(1, test + 1):
        solve()

if __name__ == "__main__":
    main()

