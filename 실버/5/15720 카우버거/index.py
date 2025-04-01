a, b, c = map(int, input().split())

buger = list(map(int, input().split()[:a])) 
side = list(map(int, input().split()[:b])) 
drink = list(map(int, input().split()[:c])) 
    
sumValue = sum(buger) + sum(side) + sum(drink)

num = []
lenMax = [len(buger), len(side), len(drink)]
buger.sort(reverse=True)
side.sort(reverse=True)
drink.sort(reverse=True)

for i in range(min(lenMax)) :
    num.append((buger[i] + side[i] + drink[i]) * 0.1)

print(sumValue)
minus = sum(num)
result = sumValue-minus
print(int(result))

