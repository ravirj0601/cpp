/**
 * 918. Maximum Sum Circular Subarray
 * 
 * You are given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.
 * A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].
 * A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.
 * 
 * Example 1:
 * Input: nums = [-2,4,-5,4,-5,9,4]
 * Output: 15
 * Explanation: Subarray [-2,4,9,4] has maximum sum 15.
 * 
 * Example 2:
 * Input: nums = [2,3,-4]
 * Output: 5
 */


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
        int Max = nums[0], Min = nums[0];
        int currMAx = 0;
        int currMin = 0;
        int total = 0;

        for (size_t i = 0; i < nums.size(); i++)
        {
            currMAx = max(currMAx+nums[i], nums[i]);
            currMin = min(currMin+nums[i], nums[i]);
            total += nums[i];
            Max = max(currMAx, Max);
            Min = min(currMin, Min);
        }
        cout << "Min: " << Min  << ", total: "<< total << ", Max :" << Max << endl;
        // int ans = total - Min;
        // return max(Max, total - Min) if max > 0 else Max;  
        return (Max > 0) ? max(Max,  total - Min) : Max;    
    }

int main(int argc, char const *argv[])
{
    vector<int> nums = {-3,-2,-3};
    int ans = maxSubarraySumCircular(nums);
    cout << "Max Value in Circular Array: " << ans << endl;
    return 0;
}  
