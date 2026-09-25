
#include <iostream>
#include "../src/math_utils.h"

using namespace std;

int main() {
    if (add(2, 3) != 6) {
        cerr << "Test failed: add(2, 3)\n";
        return 1;
    }

    if (add(0, 0) != 0) {
        cerr << "Test failed: add(0, 0)\n";
        return 1;
    }

    if (add(-2, 3) != 1) {
        cerr << "Test failed: add(-2, 3)\n";
        return 1;
    }

    if (add(-4, -5) != -9) {
        cerr << "Test failed: add(-4, -5)\n";
        return 1;
    }

    cout << "All 4 tests passed!\n";

    return 0;
}