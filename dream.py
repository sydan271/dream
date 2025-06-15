n, m = map(int, input().split())

for i in range(n):
    row = list(map(int, input().split()))
    for j in range(m):
        if row[j] == 1:
            print(i + 1, j + 1)
            exit()
