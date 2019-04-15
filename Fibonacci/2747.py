input_n: int = int(input())

def fibonacci(data: int):

    data1: int = 0
    data2: int = 1
    temp: int = data1 + data2

    for i in range(1, data-1):

        data1 = data2
        data2 = temp
        temp = data1 + data2

    return temp

print(fibonacci(input_n))