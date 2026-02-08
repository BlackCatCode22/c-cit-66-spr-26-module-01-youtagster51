#include <iostream>
using namespace std;

int largestOfThree(int a, int b, int c) {
    int largest = a;

    if (b > largest) {
        largest = b;
    }

    if (c > largest) {
        largest = c;
    }

    return largest;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Largest number: " << largestOfThree(x, y, z) << endl;
    return 0;
}


