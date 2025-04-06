n = int(input())
if n == 1 or n== 2:
    print(1)
elif n==3 :
    print(2)
for i in range(n) :
    result = (i*(i+1)) / 2
    if result > n :
        print(i-1)
        break