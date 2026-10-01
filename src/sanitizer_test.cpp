#include <iostream>

using namespace std;

int main() {
    int* value = new int(42);

    delete value;

    // Intentional use-after-free
    cout << *value << '\n';

    return 0;
}