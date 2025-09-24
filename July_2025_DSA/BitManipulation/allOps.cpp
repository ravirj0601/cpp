#include <exception>
#include <iostream>
#include <stdexcept>
using namespace std;

unsigned getBit(unsigned &n, unsigned k){
    if (k>=sizeof(unsigned) * 8) {
        throw out_of_range("search index is out of range");
    }
    return (1 & (n >> k));
}

void setBit(unsigned &n, unsigned k){
    if (k>=sizeof(unsigned) * 8) {
        return;
    }
    n = n | (1u << k);
}

void clearBit(unsigned &n, unsigned k){
    if (k>=sizeof(unsigned) * 8) {
        return;
    }
    n = n & ~(1u << k);
}

void flipBit(unsigned &n, unsigned k){
    if (k>=sizeof(unsigned) * 8) {
        return;
    }
    n = n ^ ( 1u << k);
}

int main() {
    unsigned a = 19;
    try {
        cout << getBit(a, 2) << "\n";
        cout << getBit(a, 1) << "\n";
    } catch (exception& e) {
        cerr << "Exception cought: " << e.what() << "\n"; 
    }

    cout << a << "\n";
    
    setBit(a, 2);
    cout << a << "\n";
    
    clearBit(a, 0);
    cout << a << "\n";

    flipBit(a, 1);
    cout << a << "\n";
    
    return 0;
}

