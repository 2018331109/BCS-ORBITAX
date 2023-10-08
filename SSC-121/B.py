t = int(input())

for _ in range(t):
    n = int(input())
    s = input().split()
    
    no_A = 0
    no_B = 0
    no_O = 0
    no_AB = 0
    
    for i in range(n):
        if s[i] == "A":
            no_A += 1
        elif s[i] == "B":
            no_B += 1
        elif s[i] == "O":
            no_O += 1
        elif s[i] == "AB":
            no_AB += 1
    
    chain = no_O
    if no_A > no_B:
        chain = chain + no_A + no_AB
    else:
        chain += no_B + no_AB
    
    print(chain)

