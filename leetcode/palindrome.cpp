/*
Palindrome Number

Given an integer x, return true if x is a
palindrome, and false otherwise.
*/

#include <iostream>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        int reversed = 0;
        int temp = x;
        while (temp > 0)
        {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
            std::cout << "reversed: " << reversed << std::endl;
            std::cout << "temp: " << temp << std::endl;
        }
        return reversed == x;
    }
};

int main()
{
    Solution s;
    std::cout << s.isPalindrome(12421) << std::endl;
    return 0;
}