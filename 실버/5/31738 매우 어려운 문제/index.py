n, m = map(int, input().split())
def factorial(n, m):
    if n >= m: 
        return 0  

    fact = 1
    for i in range(2, n + 1):
        fact = (fact * i) % m  

    return fact

print(factorial(n, m))