/*
Two Sum


Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up
to target. You may assume that each input would have
exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = {3, 2, 4, 5, 1};
    int target = 3;
    std::vector<int> result = solution.twoSum(nums, target);
    std::cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i];
        if (i < result.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    std::cout << std::endl;
    return 0;
}