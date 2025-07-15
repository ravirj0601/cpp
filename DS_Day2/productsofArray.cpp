/**
 * Products of Array Except Self
 */

#include <iostream>
#include <vector>
using namespace std;

// Using Brute Force Sol.
// vector<int> productExceptSelf(vector<int> &nums)
// {
//     vector<int> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int total = 1;
//         for (int j = 0; j < nums.size(); j++)
//         {
//             if (i != j)
//             {
//                 total *= nums[j];
//                 cout << "Total: " << total << "\n";
//             }
//             cout << "Sould only one time may be \n ";
//         }
//         ans.push_back(total);
//     }
//     return ans;
// }

// Using Prefix and Suffix
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    // vector<int> pre(n, 1);
    // vector<int> suff(n, 1);

    // for(int i = 1; i < n; i++){
    //     pre[i] = pre[i-1] * nums[i - 1];
    // }

    // for(int j = n - 2; j > 0; j--){
    //     suff[j] = suff[j+1] * nums[j+1];
    // }

    // for(int i = 0; i < n; i++){
    //     ans[i]= pre[i] * suff[i];
    // }

    int prefix = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = prefix;
        prefix = prefix * nums[i];
    }

    int postfix = 1;
    for (int j = nums.size() - 1; j >= 0; j--)
    {
        ans[j] *= postfix;
        postfix = postfix * nums[j];
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    for (const auto num : ans)
    {
        cout << num << " ";
    }
    return 0;
}
