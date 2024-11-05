
a, b = map(int, input().split())
A = set(map(int, input().split()))
B = set(map(int, input().split()))

difference = A|B

d = sorted(difference - B)
print(len(d))
if(len(d)) : 
    for item in d :
        print(item, end=' ')