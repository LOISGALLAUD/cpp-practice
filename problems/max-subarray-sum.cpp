/*
Problème : Somme maximale de sous-tableau (Maximum Subarray Sum)

Description :
Étant donné un tableau d'entiers, vous devez
trouver le sous-tableau (sous-séquence continue)
dont la somme est maximale et renvoyer cette somme maximale.
*/

#include <iostream>
#include <vector>
#include <chrono>
#include <random>

class Solution
{
public:
    int maxSubarraySum(const std::vector<int> &array)
    {
        int max = 0;
        for (int i = 0; i < array.size(); i++)
        {
            int sum = kadaneAlgorithm(array, i);
            if (max < sum)
            {
                max = sum;
            }
        }
        return max;
    }
    int kadaneAlgorithm(const std::vector<int> &nums, int i)
    {
        int maxSoFar = nums[0];
        int maxEndingHere = nums[0];

        for (i; i < nums.size(); i++)
        {
            maxEndingHere = std::max(nums[i], maxEndingHere + nums[i]);
            maxSoFar = std::max(maxSoFar, maxEndingHere);
        }

        return maxSoFar;
    }
};

int main()
{
    Solution s;
    std::vector<int> nums;

    for (int i = 0; i < 10000; i++)
    {
        nums.push_back(rand() % 1000);
    }
    std::cout << "Array size : " << nums.size() << std::endl;

    auto start_time = std::chrono::high_resolution_clock::now();
    std::cout << s.maxSubarraySum(nums) << std::endl;
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();

    std::cout << "Runtime : " << duration << " milliseconds" << std::endl;

    return 0;
}