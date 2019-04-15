a=int(input())
b=str(a)
count=0

for i in range(99999):
    if int(b)<10:
        b=str(0)+str(b)
    b = str(b[-1])+str(int(b[0])+int(b[-1]))[-1]
    count+=1
    if int(b)==a:
        break
print(count)