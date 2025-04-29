def myFunc(size):
    myArr = [0] * size
    el = 1

    for i in range(size):
        myArr[i] = el * 10
        el += 1

    print(myArr) 

myFunc(5) # output: [10, 20, 30, 40, 50]
myFunc(8) # output: [10, 20, 30, 40, 50, 60, 70, 80]