#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> myArr;  // dynamic

   myArr.push_back(5);
   myArr.push_back(10);
   myArr.push_back(15);

   for (int el : myArr) {
        cout << el << " ";  // output: 5 10 15
    }
    cout << endl;

    myArr.pop_back();

    for (int el : myArr) {
        cout << el << " ";  // output: 5 10
    }
    cout << endl;

    return 0;
}

