#include <iostream>
#include <vector>
#include "prefixSum.h"
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    // Brute Force Solution
    // int sum = 0;
    // int count = 0;
    // for (size_t i = 0; i < nums.size(); i++)
    // {
    //     sum = nums[i];
    //     for (size_t j = i + 1; j < nums.size(); j++)
    //     {
    //         sum += nums[j];
    //         if (sum == k){
    //             count++;
    //         }  
    //     }
    // }

    // Optimal Sol using prefixSum and Range
    prefixSum ps(nums);
    int count = 0;
    vector<int> prefix = ps.result();
    unordered_map<int, int> ans;
    for( const auto num:prefix){
        ans[num] += 1;
    }

    for (size_t i = 0; i < nums.size(); i++)
    {
        int tar = prefix[i] - k;
        if(ans.count(tar)){
            count += ans[tar];
        }
    }
    
    return count;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3,4,7,2,-3,1,4,2};
    int k = 7;
    int ans = subarraySum(arr, k);
    cout << "Ans: " << ans << endl;
    return 0;
}
