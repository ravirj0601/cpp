/**
 * 53. Maximum Subarray
 * Medium Topics < Array, Divide and Conquer, Dynamic Programming>
 *
 * Given an integer array nums, find the subarray with the largest sum, and return its sum.
 *
 * Example 1:
 * Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 * Output: 6
 * Explanation: The subarray [4,-1,2,1] has the largest sum 6.
 *
 * Example 2:
 * Input: nums = [1]
 * Output: 1
 * Explanation: The subarray [1] has the largest sum 1.
 *
 * Example 3:
 * Input: nums = [5,4,-1,7,8]
 *  Output: 23
 * Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 * */

#include <iostream>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    // Brute Force Sol O(n^2)
    //  int maxSum = 0;
    //  for (size_t i = 0; i < nums.size(); i++)
    //  {
    //      int curr_max = 0;
    //      for (size_t j = i; j < nums.size(); j++)
    //      {
    //          curr_max += nums[j];
    //          maxSum = max(maxSum, curr_max);
    //      }
    //  }

    // Kadan's Algo O(n)
    int maxSum = INT_MIN;
    int currMax = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        currMax += nums[i];
        maxSum = max(currMax, maxSum);
        if (currMax < 0)
        {
            currMax = 0;
        }
    }
    return maxSum;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    int max = maxSubArray(nums);
    cout << "MAX Value: " << max << endl;
    return 0;
}
