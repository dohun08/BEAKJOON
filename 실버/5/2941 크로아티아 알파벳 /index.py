n = input()
count = 0
i = 0

while i < len(n):
    if i < len(n) - 1:
        if n[i] == 'c' and n[i+1] == '=':
            i += 2
            count += 1
            continue
        elif n[i] == 'c' and n[i+1] == '-':
            i += 2
            count += 1
            continue
        elif n[i] == 'd' and n[i+1] == '-':
            i += 2
            count += 1
            continue
        elif n[i] == 'l' and n[i+1] == 'j':
            i += 2
            count += 1
            continue
        elif n[i] == 'n' and n[i+1] == 'j':
            i += 2
            count += 1
            continue
        elif n[i] == 's' and n[i+1] == '=':
            i += 2
            count += 1
            continue
        elif n[i] == 'z' and n[i+1] == '=':
            i += 2
            count += 1
            continue

    if i < len(n) - 2 and n[i] == 'd' and n[i+1] == 'z' and n[i+2] == '=':
        i += 3 
        count += 1
        continue

    count += 1
    i += 1 

print(count)