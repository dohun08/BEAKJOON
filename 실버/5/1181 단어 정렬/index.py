n = int(input())
arr = [input() for _ in range(n)]
newarr = list(set(arr))
newarr = sorted(newarr, key=lambda x: (len(x), x))
for i in newarr :
    print(i)