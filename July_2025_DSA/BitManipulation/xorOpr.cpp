#include <iostream>
using namespace std;

void flipBit(int n, int k){
    n = n ^ (1 << k);
    cout << "This is the latest N: " << n << ", Changed bit from this position: " << k << "\n";
}

int main() {
    cout << "Xor of 6 and 3: " << (6 ^ 3) << "\n";
    cout << "Xor of 7 and 3: " << (7 ^ 3) << "\n";
    flipBit(5, 0);
    flipBit(8, 3);
    return 0;
}

