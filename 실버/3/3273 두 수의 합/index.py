n = int(input())
arr = list(map(int, input().split()))
num = int(input())

arr_set = set(arr)
count = 0

for i in arr:
    if num - i in arr_set:
        count += 1
        
print(count // 2)