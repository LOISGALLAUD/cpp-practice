/*
Longest Common Prefix

Write a function to find the longest common prefix
string amongst an array of strings.

If there is no common prefix, return an empty string "".


Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }

        std::string *result = new std::string("");
        int *i = new int(0);

        while (true)
        {
            char *c = new char(strs[0][*i]);

            for (auto &s : strs)
            {
                if (*i >= s.length() || *c != s[*i])
                {
                    std::string result_copy = *result;
                    delete result;
                    delete i;
                    delete c;
                    return result_copy;
                }
            }

            *result += *c;
            delete c;
            (*i)++;
        }
    }
};

int main()
{
    Solution s;
    std::vector<std::string> array = {"basdft", "basdfrsdf", "basdfz"};
    std::cout << s.longestCommonPrefix(array) << std::endl;
    return 0;
}