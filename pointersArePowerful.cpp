#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;

    cout << "Address: " << p << endl;
    cout << "Value using pointer: " << *p << endl;

    *p = 20;
    cout << "New value of a: " << a << endl;

    cout << endl;

    int arr[5] = {1, 9, 5, 1, 1};
    int* ptr = arr;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
