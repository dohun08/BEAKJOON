n = int(input())
arr = [i for i in range(1, n+1)]
trash = []
while len(arr) != 1 :
    trash.append(arr.pop(0))
    num = arr.pop(0)
    arr.insert(len(arr), num)
print(*trash, *arr)