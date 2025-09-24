#include <iostream>
using namespace std;

unsigned countSetBits(unsigned n){
    int count = 0;
    while (n != 0) {
        n = n & (n-1);
        count++;
    }
    return count;
}

unsigned getBit(unsigned n){
    return n & (1 >> 0);
}

int main() {
    unsigned n = 64;
    int ans = countSetBits(n);
        
    if (ans == 1) {
        cout << n << "\n";
        if ((1&(n >> 0)) == 0) {
            cout  << n << " is power of 2\n"; //  << "\n";
        }else {
            cout << "This number is not power of 2\n"; 
        }
    }else {
       cout << "Either number is 0 or less then 0.\n"; 
    }
    return 0;
}

