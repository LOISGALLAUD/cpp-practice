/*
3Sum

Given an integer array nums, return all the triplets
[nums[i], nums[j], nums[k]] such that i != j, i != k,
and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
*/

#include <vector>
#include <iostream>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        return {nums};
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> result = solution.threeSum(nums);
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << "[";
        for (int j = 0; j < result[i].size(); j++)
        {
            std::cout << result[i][j];
            if (j != result[i].size() - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
    return 0;
}