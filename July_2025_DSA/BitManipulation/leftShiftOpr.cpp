#include <iostream>
using namespace std;

int main() {
    int n = 3;
    cout <<"n: "<<  n << ", Left by 1: " << (n << 1) << "\n";
    cout <<"n: "<<  n << ", Left by 2: " << (n << 2) << "\n";
    cout <<"n: "<<  n << ", Left by 3: " << (n << 3) << "\n";

    // Exercise
    cout << "Exercize 1: " << (5 << 1) << "\n"; // Expected 10
    cout << "Exercize 2: " << (5 << 2) << "\n"; // Expected 20
    cout << "Exercize 3: " << (1 << 4) << "\n"; // Expected 16
    n = 7;
    cout << "Exercize 4: " << (n << 3) << "\n"; // Expected 56
    return 0;
}

