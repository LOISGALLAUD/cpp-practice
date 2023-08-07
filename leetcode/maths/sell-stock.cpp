/*
Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is
the price of a given stock on the ith day.

You want to maximize your profit by choosing a
single day to buy one stock and choosing a different
day in the future to sell that stock.

Return the maximum profit you can achieve from this
transaction. If you cannot achieve any profit, return 0.
*/

#include <vector>
#include <iostream>
#include <climits>

class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            else if (prices[i] - minPrice > maxProfit)
            {
                maxProfit = prices[i] - minPrice;
            }
        }
        return maxProfit;
    }
};

int main()
{
    Solution solution;
    std::vector<int> prices = {7, 1, 5, 3, 6, 4, 0, 1, 2, 3, 8, 12, 11};
    int result = solution.maxProfit(prices);
    std::cout << result << std::endl;
    return 0;
}