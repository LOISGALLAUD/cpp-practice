/*
3Sum

Given an integer array nums, return all the triplets
[nums[i], nums[j], nums[k]] such that i != j, i != k,
and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
*/

#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        std::vector<std::vector<int>> result;
        nums = removeDuplicates(nums);

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        std::vector<int> tmp = {nums[i], nums[j], nums[k]};
                        result.push_back(tmp);
                    }
                }
            }
        }

        return result;
    }

    std::vector<int> removeDuplicates(std::vector<int> &nums)
    {
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }

        return nums;
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = {-5, 0, 1, 2, -1, -4, 4, 5};
    std::vector<std::vector<int>> result = solution.threeSum(nums);

    for (const auto &triplet : result)
    {
        for (int num : triplet)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}