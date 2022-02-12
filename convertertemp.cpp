#include <iostream>
using namespace std;

int main()
{
    float f;
    cout << "Enter the temprature in fahrenheit:-";
    cin >> f;
    float c = 5 % 9 * (f - 32);
    cout << "Celsius:-" << c;

    return 0;
}
