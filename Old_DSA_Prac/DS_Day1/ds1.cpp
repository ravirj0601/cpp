#include<iostream>
#include<vector>
using namespace std;


vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v = {};
        int length = nums.size();

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                v.push_back(nums[j]);
            }
        }
        return v;
    }

int main(){
    vector<int> b = {1,4,1,2};
    vector<int> d = getConcatenation(b);
    for (auto i : d)
    {
        cout << i << endl;
    }
    
    return 0;
}