# 📘 PLS Assignment: Memory Allocation of Arrays in C++ and Python

## 🔒 Fixed Stack-Dynamic Allocation

### C++
```cpp
int myArr[5];
```
- A **fixed-size array** declared on the **stack**.
- The size (`5`) is determined at **compile time**.

### Python
```python
myArray = [0] * 5
```
- Python doesn't support fixed-size arrays explicitly.
- However, this simulates a fixed-size array using a list.
- The size (`5`) is fixed at runtime.

---

## 🔄 Stack-Dynamic Allocation

### C++
```cpp
void myFunc(int size) {
    int myArr[size];
}
```
- The array size is defined by the parameter `size`.
- The size is determined **at runtime**, but memory is allocated on the **stack**.

### Python
```python
def myFunc(size):
    myArr = [0] * size
```
- Similarly, the array size is set at **runtime** using a parameter.
- Unlike C++, all arrays in Python are heap-allocated.

---

## 📦 Fixed Heap-Dynamic Allocation

### C++
```cpp
int* arr = new int[5];
// ... use the array ...
delete[] arr;
```
- The array is allocated on the **heap**.
- The size (`5`) is **fixed** and set at runtime.
- Memory must be explicitly deallocated using `delete[]`.

### Python
```python
myArr = [i * 2 for i in range(10)]
```
- The size is fixed (`10`) during initialization.
- In Python, all arrays (lists) are stored on the **heap**.

---

## 🔁 Heap-Dynamic Allocation

### C++
```cpp
#include <vector>
vector<int> myArr;
myArr.push_back(5);
myArr.push_back(10);
myArr.push_back(15);
```
- Uses `vector` which is dynamically resizable.
- Stored in **heap** and supports dynamic memory growth (push/pop operations).

### Python
```python
myArr = []
myArr.append(5)
myArr.append(8)
print(myArr)
```
- Lists in Python are fully **dynamic** and grow/shrink as needed.
- Internally managed in the **heap**.

