#include <iostream>
using namespace std;

void clearBit(int& n, int& k){
    n = n & ~(1 << k);
    cout << "This is the latest N: " << n << ", Changed bit from this position: " << k << "\n";
}

int main() {
    cout << (~5) << "\n";    
    cout << (~0) << "\n";    
    cout << (~1) << "\n";
    int a = 13, b = 2;
    clearBit(a, b);
    return 0;
}

