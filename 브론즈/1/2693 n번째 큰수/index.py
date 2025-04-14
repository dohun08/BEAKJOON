n = int(input())
for _ in range(n) :
    arr = list(map(int, input().split()))
    num = max(arr)
    arr.remove(num)
    num = max(arr)
    arr.remove(num)
    print(max(arr))