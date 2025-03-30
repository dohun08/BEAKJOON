while True :
    try :
        n = list(map(int, input().split()))
        i = 1
        result = []
        while i < n[0] :
            num = n[i] - n[i+1]
            if num < 0 :
                num*=-1
            result.append(num)
            i+=1
            result.sort()
        if result[:n[0]-1] == list(range(1, n[0])) :
            print('Jolly')
        else :
            print('Not jolly')
            
    except :
        break
