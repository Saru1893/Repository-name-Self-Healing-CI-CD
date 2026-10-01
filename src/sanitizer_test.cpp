#include <iostream>

using namespace std;

int main() {
    int* value = new int(42);

    delete value;

    // Intentional double-free
    delete value;

    return 0;
}