#include <iostream>

// Function to check if a number is even
bool isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    int number1 = 4;
    int number2 = 7;
    int number3 = 0;
    int number4 = -2;
    int number5 = -5;

    std::cout << number1 << " is " << (isEven(number1) ? "Even" : "Odd") << std::endl;
    std::cout << number2 << " is " << (isEven(number2) ? "Even" : "Odd") << std::endl;
    std::cout << number3 << " is " << (isEven(number3) ? "Even" : "Odd") << std::endl;
    std::cout << number4 << " is " << (isEven(number4) ? "Even" : "Odd") << std::endl;
    std::cout << number5 << " is " << (isEven(number5) ? "Even" : "Odd") << std::endl;

    return 0;
}
