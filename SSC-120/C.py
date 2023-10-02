
def solve():
    n=int(input())
    a=list(map(int, input().split()))
    b=[1]*n

    for i in range(n-2, -1, -1):
        if a[i]*a[i+1]<0:
            b[i]+=b[i+1]
        else:
            b[i]=1
        
    print(*b)




def main():
    t=int(input())
    for it in range(t):
        solve()

if __name__ =='__main__':
    main()
