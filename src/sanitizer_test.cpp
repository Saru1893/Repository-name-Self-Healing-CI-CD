#include <iostream>

using namespace std;

int main() {
    int arr[3] = {10, 20, 30};

    // Intentional stack-buffer-overflow
    arr[5] = 50;

    cout << arr[5] << '\n';

    return 0;
}