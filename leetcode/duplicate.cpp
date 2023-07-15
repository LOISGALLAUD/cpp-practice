/*
Contains Duplicate

Given an integer array nums, return true if any value appears
at least twice in the array, and return false if every element is distinct.
*/

#include <vector>
#include <iostream>
#include <algorithm>

class Solution
{
public:
    bool containsDuplicate(std::vector<int> &nums)
    {
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 1};
    bool result = solution.containsDuplicate(nums);
    std::cout << result << std::endl;
    return 0;
}