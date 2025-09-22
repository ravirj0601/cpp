#include <iostream>
using namespace std;
void setBit(int n, int k){
    n = n | (1 << k);
    cout << n << "\n";
}

int main() {
    cout << ( 6 | 3) << "\n";
    setBit(5,1);
    setBit(8,0);
    return 0;
}

