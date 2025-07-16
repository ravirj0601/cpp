#include "prefixSum.h"
#include <iostream>

suffixSum::suffixSum(vector<int> arr) : prefixSum(arr) {
    int total = 0;
    PS.clear();
    PS.resize(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--) {
        total += arr[i];
        PS[i] = total;
    }
}   

prefixSum::prefixSum(vector<int> arr)
{
    int total = 0;
    for (const auto num : arr)
    {
        total += num;
        // cout << total << ", ";
        PS.push_back(total);
    }
    // cout << "\n";
}
void prefixSum::printFS()
{
    for (const auto num : PS)
    {
        cout << num << " : ";
    }
    cout << "\n";
}

int prefixSum::rangeSum(int left, int right){
    int rightPre = PS[right];
    // int leftPre = PS[left - 1] if left > 0 else 0;
    int leftPre = (left > 0) ? PS[left - 1] : 0;
    cout << "Left: " << leftPre << "Right: "  << rightPre << "\n";
    return rightPre - leftPre;
}

vector<int> prefixSum::result(){
    return PS;
}

prefixSum::~prefixSum() {}

void suffixSum::printFS() {
    cout << "Printing Suffix: ";
    for (const auto& val : PS) {
        cout << val << " : ";
    }
    cout << "\n";
}

suffixSum::~suffixSum() {}

// int main(int argc, char const *argv[])
// {
//     /* code */
//     vector<int> arr = {2,1,-1};
//     prefixSum pr1(arr);
//     suffixSum pr2(arr);
//     pr1.printFS();
//     pr2.printFS();
//     vector<int> res = pr1.result();
//     vector<int> res1 = pr2.result();
//     for (size_t i = 0; i < res.size(); ++i) {
//         cout << "Prefix: " << res[i] << ", Suffix: " << res1[i] << "\n";
//     }
//     // cout << "Range Sum (1, 3): " << pr1.rangeSum(2, 3) << "\n";
//     return 0;
// }
