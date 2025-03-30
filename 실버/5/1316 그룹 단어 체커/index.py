n = int(input())

count = 0
for i in range(n) :
    s = input()
    prev = ''
    arr = []
    no = 0
    for char in s :
        if char != prev :
            if char in arr :
                no+=1
                break
            else :
                arr.append(char)
        prev = char
    if not no :
            count+=1
print(count)
                