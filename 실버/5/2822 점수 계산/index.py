arr= []

for i in range(8) :
    n = int(input())
    arr.append(n)
    
result = 0
new_arr = arr[:]
p = []

for _ in range(5):
    max_value = max(arr) 
    result += max_value  
    idx = new_arr.index(max_value)
    arr.remove(max_value)
    p.append(idx)
p.sort()
print(result)
for i in p :
    print(i+1, end=' ')