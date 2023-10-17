N = int(input())

score = {}
index = {}

bi = -1
bs = -1

for i in range(N):
    S, T = input().split()
    T = int(T)

    if S not in score:
        # This is an original submission
        score[S] = T
        index[S] = i

        if T > bs or (T == bs and i < bi):
            bs = T
            bi = i

print(bi + 1)

