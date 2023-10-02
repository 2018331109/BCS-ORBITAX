def solve():
    a = input()
    c = input()
    b = ""

    n = len(a)
    for i in range(n):
        if a[i] == c[i]:
            b += 'z'
        elif a[i] > c[i]:
            b += c[i]
        else:
            print(-1)
            return

    print(b)
    return


def main():
    test = 1
    # test = int(input())
    for tc in range(1, test + 1):
        solve()


if __name__ == "__main__":
    main()

