/*
Merge Strings Alternately

You are given two strings word1 and word2.
Merge the strings by adding letters in alternating order,
starting with word1. If a string is longer than the other,
append the additional letters onto the end of the merged string.
*/

#include <iostream>
#include <string>

class Solution
{
public:
    void mergeAlternatively(std::string word1, std::string word2)
    {
        std::string mergedString = "";
        int i = 0;
        while (i < word1.length() && i < word2.length())
        {
            mergedString += word1[i];
            mergedString += word2[i];
            i++;
        }

        if (i < word1.length())
        {
            mergedString += word1.substr(i);
        }
        else if (i < word2.length())
        {
            mergedString += word2.substr(i);
        }

        std::cout << mergedString << std::endl;
    }
};

int main()
{
    Solution solution;
    std::string word1 = "OOOO";
    std::string word2 = "XXXXXX";
    solution.mergeAlternatively(word1, word2);
    return 0;
}