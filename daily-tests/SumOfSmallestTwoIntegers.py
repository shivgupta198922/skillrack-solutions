N = int(input())
L = list(map(int, input().strip().split()))
Min1 = min(L)
L.remove(Min1)
Min2 = min(L)
print(Min1 + Min2)