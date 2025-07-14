#include<iostream>
using namespace std;

class prefixSum
{
private:
vector<int> PS;
    /* data */
public:
    prefixSum(vector<int> arr);
    void printFS(){
        for(const auto num:PS){
            cout << num << " : ";
        }
        cout << "\n";
    }
    ~prefixSum();
};

prefixSum::prefixSum(vector<int> arr)
{
    int total = 0;
    for(const auto num:arr){
        total += num;
        PS.push_back(num);
    }
 }

prefixSum::~prefixSum(){ } 
