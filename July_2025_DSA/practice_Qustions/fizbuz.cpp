#include <iostream>
using namespace std;

void print(int n){
    int count = 1;
    while (count != n) {
        if (count%3 == 0 && count%5==0) {
            cout << "FizBuzz\n";
        }else if (count%3 == 0) {
            cout << "Fizz\n";
        }else if (count%5 == 0) {
            cout << "Buzz\n";
        }else{
            cout << "Count: " << count << "\n";
        }
        count++;
    }
}

int main() {
    print(39); 
    return 0;
}

