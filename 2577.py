a=int(input())
b=int(input())
c=int(input())
tot=str(a*b*c)
li=list()
for i in range(10):
	li.append(str(i))
	a=li[i]
	print(tot.count(a))