#include <iostream>
using namespace std;

void myFunc(int size){
    int myArr[size];
    int el = 1;

    for (int i = 0; i < size; i++) {
        myArr[i] = el * 2;
        el++;
    }

    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << myArr[i] << " ";
    }
}

int main(){

    myFunc(5);  // output: 2 4 6 8 10
    myFunc(8);  // output: 2 4 6 8 10 12 14 16
    return 0;
}

