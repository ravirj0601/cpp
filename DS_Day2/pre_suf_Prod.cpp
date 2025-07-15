#include <iostream>
#include "pre_suf_Prod.h"

using namespace std;

// Prefix Producs implimentations
prefixProd::prefixProd(vector<int> arr)
{
    int total = 1;
    for (const auto num : arr)
    {
        total *= num;
        // cout << total << ", ";
        PS.push_back(total);
    }
    // cout << "\n";
}
void prefixProd::printFS()
{
    cout << "Printing Prefix: ";
    for (const auto num : PS)
    {
        cout << num << " : ";
    }
    cout << "\n";
}
prefixProd::~prefixProd() {}

// Sufix Implimentations
suffixProd::suffixProd(vector<int> arr)
{
    int total = 1;
    PS.resize(arr.size());
    for (int i = arr.size() - 1; i >= 0; --i)
    {
        total *= arr[i];
        // cout << total << ", ";
        PS[i] = total;
    }
    // cout << arr.size() << "Size \n";
}
void suffixProd::printFS()
{
    cout << "Printing Suffix: ";
    for (const auto num : PS)
    {
        cout << num << " : ";
    }
    cout << "\n";
}
suffixProd::~suffixProd() {}

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> arr = {1, 2, 3, 4};
    prefixProd pr1(arr);
    suffixProd pr2(arr);
    pr1.printFS();
    pr2.printFS();
    // cout << "Range Sum (1, 3): " << pr1.rangeSum(2, 3) << "\n";
    return 0;
}
