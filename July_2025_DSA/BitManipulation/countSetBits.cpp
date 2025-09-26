#include <iostream>
using namespace std;

unsigned countSetBits(unsigned &n){
    int count = 0;
    while (n != 0) {
        n = n & (n-1);
        count++;
    }
    
    return count;
}

int main() {
    unsigned n = 48;
    int ans = countSetBits(n);
    cout << "Total count: " << ans << "\n";
    return 0;
}

