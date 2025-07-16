#include <iostream>
#include <vector>
// #include "prefixSum.h"
using namespace std;

int subarrayProd(vector<int> &nums, int k)
{
    // Brute Force Solution
    int prod = 1;
    int count = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        prod = nums[i];
        if (prod < k)
        {
            count++;
        }
        
        for (size_t j = i + 1; j < nums.size(); j++)
        {
            prod *= nums[j];
            if (prod < k){
                count++;
            }  
        }
    }

    // Optimal Sol using prefixSum and Range
    // prefixSum ps(nums);
    // int count = 0;
    // vector<int> prefix = ps.result();
    // unordered_map<int, int> ans;
    // for( const auto num:prefix){
    //     ans[num] += 1;
    // }

    // for (size_t i = 0; i < nums.size(); i++)
    // {
    //     int tar = prefix[i] - k;
    //     if(ans.count(tar)){
    //         count += ans[tar];
    //     }
    // }
    
    return count;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10,9,10,4,3,8,3,3,6,2,10,10,9,3};
    int k = 19;
    int ans = subarrayProd(arr, k);
    cout << "Ans: " << ans << endl;
    return 0;
}