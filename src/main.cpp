#include <iostream>
#include "math_utils.h"

using namespace std;

int main() {
    cout << "Self-Healing CI/CD Engine Test Project\n";
    cout << "2 + 3 = " << add(2, 3) << '\n';

    int* data = new int[3];

    data[0] = 10;
    data[1] = 20;
    data[2] = 30;
    data[3] = 40;  // Intentional buffer overflow

    delete[] data;

    return 0;
}