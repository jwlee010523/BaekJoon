n = int(input())
a=[[]]*n
for i in range(n):
    a[i] = list(map(int,input().split()))

i = 0
for i in range(n):
    avg = sum(a[i][1:len(a[i])])/a[i][0]
    cnt = 0
    for j in range(1,len(a[i])):
        if a[i][j] > avg:
            cnt +=1
    print('%.3f%%' %(cnt/a[i][0]*100))