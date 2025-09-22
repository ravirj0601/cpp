#include <iostream>
using namespace std;

int main() {
    int ans = 5 & 7;
    cout << ans << "\n";

    int n = 11;
    if (n & 1) {
        cout  << "Its odd.\n";
    }else {
        cout  << "Its Even.\n";
    }
    
    n = 19;
    int k = 0;
    if (n & (1 << k)) {
        cout << "Its set..\n";
    }else {
        cout << "Its Not set..\n";
    }
    return 0;
}

