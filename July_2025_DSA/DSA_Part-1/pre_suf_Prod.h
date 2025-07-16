#ifndef PRE_SUF_PROD_H
#define PRE_SUF_PROD_H

#include <vector>

class prefixProd {
private:
    std::vector<int> PS;

public:
    prefixProd(std::vector<int> arr);
    void printFS();
    int rangeSum(int left, int right);
    ~prefixProd();
};

class suffixProd {
private:
    std::vector<int> PS;

public:
    suffixProd(std::vector<int> arr);
    void printFS();
    ~suffixProd();
};

#endif // PRE_SUF_PROD_H