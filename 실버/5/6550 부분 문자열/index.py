def check(n, m) :
    n_list = list(n)
    m_list = list(m)
    i=0
    while i < len(m_list):
        if i == len(n) : 
            break
        if n_list[i] != m_list[i]:
            m_list.pop(i) 
        else:
            i += 1
    return ''.join(m_list)

n,m=input().split()
m = check(n, m)

if n in m :
    print('Yes')
else :
    print('No')
    
    
    





