S = input().strip()
A = S.count('A')
B = S.count('B')
K = int(input())
print("yes" if (B // K) >= (A - 1) else "no")