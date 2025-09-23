#include <iostream>
using namespace std;

void getBits(int &n, int k){
    int ans = (n >> k) & 1;
    cout << "Bit: " << ans << "\n";
    
}
int main() {
    int n = 13;
    cout <<"n: "<<  n << ", Right by 1: " << (n >> 1) << "\n"; // Expected 6
    cout <<"n: "<<  n << ", Right by 2: " << (n >> 2) << "\n"; // Expected 3
    cout <<"n: "<<  n << ", Right by 3: " << (n >> 3) << "\n"; // Expected 1
    int a = 13; 
    getBits(a, 2);
    getBits(a, 1);
    return 0;
}

