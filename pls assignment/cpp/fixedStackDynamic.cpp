#include <iostream>
using namespace std;

int main(){
    int myArr[5]; // fixed size
    int el = 1;

    for(int i = 0; i < 5; i++){
        myArr[i] = el * 10;
        el++;
    }

    for(int i = 0; i < 5; i++){
        cout << myArr[i] << " ";  // output : 10 20 30 40 50
    }

    return 0;
}
