# n = int(input())
# count = 0
# i = 0
# j = 0
# temp = 1
# check = 1

# while count != n :
#     result = f'{i+1}/{j+1}'
#     count+=1
#     if i == 0 and check:
#         check = 0
#         j+=1
#         temp = 2
#     elif j== 0 and check:
#         check = 0
#         i+=1
#         temp = 1
#     elif temp == 1:
#         check = 1
#         i-=1
#         j+=1
#     elif temp == 2 :
#         check = 1
#         i+=1
#         j-=1
# print(result)

n = int(input())

line = 1

while n > line:
    n -= line
    line += 1
    
if line % 2 == 0:
    numerator = n
    denominator = line - n + 1
else:
    numerator = line - n + 1
    denominator = n

print(f'{numerator}/{denominator}')