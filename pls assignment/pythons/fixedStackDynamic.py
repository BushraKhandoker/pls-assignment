# simulating fixed size array

myArray = [0] * 5
el = 1

for i in range(5):
    myArray[i] = el
    el +=1

print(myArray)

# output: [1, 2, 3, 4, 5]