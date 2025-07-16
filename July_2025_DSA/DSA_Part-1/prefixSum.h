#ifndef PREFIX_SUM_H
#define PREFIX_SUM_H

#include <vector>
using namespace std;

class prefixSum {
protected:
    vector<int> PS;
public:
    prefixSum(vector<int> arr);
    void printFS();
    int rangeSum(int left, int right);
    vector<int> result();
    ~prefixSum();
};

class suffixSum : public prefixSum {
public:
    suffixSum(vector<int> arr);
    void printFS();
    using prefixSum::rangeSum;
    using prefixSum::printFS;
    using prefixSum::result;
    ~suffixSum();
};

#endif // PREFIX_SUM_H