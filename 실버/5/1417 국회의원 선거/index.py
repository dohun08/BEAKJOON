n = int(input())

arr = []
som = int(input())
if n == 1 :
    print(0)
else :
    for i in range(n-1) :
        num = int(input())
        arr.append(num)

    arr.sort()
    count = 0
    while max(arr) >= som :
        for i in range(len(arr)) :
            if arr[i] == max(arr) :
                arr[i]-=1
                som+=1
                count+=1
            if max(arr) < som :
                break
    print(count)