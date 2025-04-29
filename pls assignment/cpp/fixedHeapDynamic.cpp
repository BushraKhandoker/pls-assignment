#include <iostream>
using namespace std;

int main(){
    int* arr = new int[5] ; // allocated in heap

    for(int i = 0; i < 5; i++){
        arr[i] = i * 10;
    }
    cout << endl;
     for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";   // output: 0 10 20 30 40
    }

    delete[] arr;  // free up heap

    return 0;
}

