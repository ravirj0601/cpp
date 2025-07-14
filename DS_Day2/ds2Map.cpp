#include <iostream>
#include <unordered_map>
using namespace std;

// Unordered Map {{"Key": Value}, .......}

void insert(unordered_map<std::string, int> &difMap, string a)
{
    if (difMap.count(a))
    {
        difMap[a] += 1;
    }
    else
    {
        difMap[a] = 1;
    }
}

void printMap(unordered_map<std::string, int> &myMap)
{
    for (auto pair : myMap)
    {
        cout << pair.first << " : " << pair.second << "\n";
    }
}

// find Dupicates
bool hasDuplicate(vector<int> &nums)
{
    std::unordered_map<int, int> cnt;
    for (auto num : nums)
    {
        if (cnt.count(num))
        {
            cout << num << "\n";
            return true;
        }
        else
        {
            cnt[num] = 1;
        }
    }
    return false;
}

// Two Sum
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     // brute force solution
//     vector<int> ans;
//     for (auto i = 0; i < nums.size(); i++)
//     {
//         for (auto j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//     return ans;
// }

// Two Sum with hash Map

vector<int> twoSum(vector<int> &nums, int target)
{
    // brute force solution
    unordered_map<int, int> ans;
    for (auto i = 0; i < nums.size(); i++)
    {
        ans[nums[i]] = i;
    }
    for (auto j = 0; j < nums.size(); j++)
    {
        int diff = target - nums[j];
        if (ans.count(diff) && ans[diff] != j)
        {
            return {j, ans[diff]};
        } 
    } 
    return {};
}

int main()
{
    unordered_map<std::string, int> ppl;
    insert(ppl, "Ravi");
    insert(ppl, "Ravi");
    insert(ppl, "Vinu");
    insert(ppl, "Ravi");
    insert(ppl, "sumit");
    // printMap(ppl);

    vector<int> nums = {3, 4, 5, 6};
    int target = 7;
    bool reslt = hasDuplicate(nums);
    vector<int> ans = twoSum(nums, target);
    for (auto num : ans)
    {
        cout << num << "\n";
    }
    // cout << reslt << "\n";

    return 0;
}