/**
 * Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
 * 
 * Example 1:
 * Input: nums = [1,1,1,2,2,3], k = 2
 * Output: [1,2]
 * 
 * Example 2:
 * Input: nums = [1], k = 1
 * Output: [1]
 */

#include<iostream>
#include<unordered_map>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> temp;
    vector<int> ans;
    vector<pair<int, int>> nm;
    for (const auto num:nums)
    {
        temp[num] += 1;
    }

    for (const auto pair:temp){
        if (pair.second >= k){
            ans.push_back(pair.first);
        }
    }
    if (ans.empty())
    {
        return nums;
    }
    return ans;
        
}

int main(){
    vector<int> nums = {3,0,1,0};
    int k = 1;
    vector<int> p = topKFrequent(nums, k);
    for (auto &&num : p)
    {
        cout << num << ", ";
    }
    cout<<"\n";
    return 0;
}