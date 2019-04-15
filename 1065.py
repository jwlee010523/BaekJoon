n=int(input())

def cnt(n):
    count=0
    for i in range(1,n+1):
        if i<100: count+=1
        elif i<1000: count+=hansu(i)
        else: pass
    return count

def hansu(num):
    a,b,c=str(num)[0]+str(num)[1]+str(num)[2]
    a,b,c=int(a),int(b),int(c)
    if a-b==b-c:
        return 1
    else:
        return 0
print(cnt(n))