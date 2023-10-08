def main():
    tt = 1
    tt = int(input())
    
    for _ in range(tt):
        n, k = map(int, input().split())
        s = input().strip()
        cnt = [0] * n

        for i in range(n - 2):
            if s[i] == s[i + 1] or s[i] == s[i + 2] or s[i + 1] == s[i + 2]:
                cnt[i + 2] = 1
            cnt[i + 2] += cnt[i + 1]

        for _ in range(k):
            l, r = map(int, input().split())
            
            if r - l + 1 <= 2:
                print("NO")
            else:
                x = cnt[r - 1] - cnt[l]
                if x:
                    print("YES")
                else:
                    print("NO")

if __name__ == "__main__":
    main()

