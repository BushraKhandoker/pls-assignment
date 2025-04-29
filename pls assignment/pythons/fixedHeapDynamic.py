# Python lists are automatically allocated to heap

def myFunc():
    myArr = [i*2 for i in range(10)]
    print(myArr)

myFunc()

# output: [0, 2, 4, 6, 8, 10, 12, 14, 16, 18]