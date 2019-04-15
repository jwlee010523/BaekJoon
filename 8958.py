C = int(input())

while C>0: 
    sum = 0
    OX = list(map(str, input().split('X')))
    for i in range(len(OX)):
        if OX[i] != '':
            for j in range(1, len(OX[i])+1):
                sum += j
    C -= 1
    print(sum)