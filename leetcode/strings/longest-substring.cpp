/*
Longest Substring Without Repeating Characters

Given a string s, find the length of the longest
substring without repeating characters.
*/

#include <iostream>
#include <string>

class Solution
{
public:
    int lengthOfLongestSubstring(std::string s)
    {
        int max = 0;
        int start = 0;
        int end = 0;
        int length = s.length();
        int map[128] = {0};
        while (end < length)
        {
            char c = s[end];
            map[c]++;
            std::cout << c << " " << map[c] << std::endl;
            while (map[c] > 1)
            {
                char c = s[start];
                map[c]--;
                start++;
            }
            int current = end - start + 1;
            if (current > max)
            {
                max = current;
            }
            end++;
        }
        return max;
    }
};

int main()
{
    Solution solution;
    std::string s = "dfghjjjjjklmioyfiiuhoij";
    int result = solution.lengthOfLongestSubstring(s);
    std::cout << result << std::endl;
    return 0;
}