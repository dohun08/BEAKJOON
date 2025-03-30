s, f = map(int, input().split())

arr = []
for i in range(s) :
    num = input()
    arr.append(num)

rankArray = [_ for _ in range(9)]

for string in arr :
    if '1' in string :
        rankArray[0] = (string.index('1'))
    if '2' in string :
        rankArray[1] = (string.index('2'))
    if '3' in string :
        rankArray[2] = (string.index('3'))
    if '4' in string :
        rankArray[3] = (string.index('4'))
    if '5' in string :
        rankArray[4] = (string.index('5'))
    if '6' in string :
        rankArray[5] = (string.index('6'))
    if '7' in string :
        rankArray[6] = (string.index('7'))
    if '8' in string :
        rankArray[7] = (string.index('8'))
    if '9' in string :
        rankArray[8] = (string.index('9'))
        
        
def rank_numbers(arr):
    # 중복 값을 고려하여 정렬된 순위를 매김
    sorted_unique = sorted(set(arr), reverse=True) 
    rank_dict = {value: rank + 1 for rank, value in enumerate(sorted_unique)}  # 순위 매기기
    
    ranked_arr = [rank_dict[value] for value in arr]
    return ranked_arr

for i in rank_numbers(rankArray) :
    print(i)
