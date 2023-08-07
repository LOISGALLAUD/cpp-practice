/*
Container With Most Water

You are given an integer array height of length n.
There are n vertical lines drawn such that the two
endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a
container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.
*/

#include <vector>
#include <iostream>

class Solution
{
public:
    int maxArea(std::vector<int> &height)
    {
        int max = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right)
        {
            int area = (right - left) * std::min(height[left], height[right]);
            std::cout << area << std::endl;
            max = std::max(max, area);

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return max;
    }
};

int main()
{
    Solution s;
    std::vector<int> height = {1, 8, 6, 2, 10, 10, 10, 10, 10};

    std::cout << s.maxArea(height) << std::endl;

    return 0;
}