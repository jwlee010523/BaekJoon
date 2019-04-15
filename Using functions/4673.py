setSelf = set(i for i in range(1,10001)) #집합으로 1~10000까지 생성
setF = set() #빈 집합
for i in range(1,10001):
    for j in str(i): #숫자를 문자열로 변환하고 문자 하나하나씩
        i += int(j) #문자 하나를 정수로 변환하고 i에 누적하여 더해준다
    setF.add(i) #빈 집합에 누적한 숫자를 넣는다
setSelf = sorted(setSelf - setF) #1~10000 이 있는 집합에서 sefF에 있는 숫자들을 뺀다
for i in setSelf: #setSelf에 있는 숫자를 하나씩 출력
    print(i)