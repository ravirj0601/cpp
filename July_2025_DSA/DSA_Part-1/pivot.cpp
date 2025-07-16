#include <iostream>
#include "prefixSum.h"

int pivotIndex(vector<int> &nums)
{
    prefixSum ps1(nums);
    suffixSum ps2(nums);
    vector<int> prefix = ps1.result();
    vector<int> suffix = ps2.result();
    int start = 0;
    int end = nums.size();
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (prefix[i - 1] == suffix[i + 1])
        {
            return i;
        }
    }
    return -1;
}



int main(int argc, char const *argv[])
{
    vector<int> arr = {-1, -1, 0, 0, -1, -1};
    int ind = pivotIndex(arr);
    cout << "Ans: " << ind << "\n";
    return 0;
}
