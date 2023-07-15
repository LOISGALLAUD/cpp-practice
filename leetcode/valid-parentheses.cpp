/*
Valid Parentheses

Given a string s containing just the characters '(', ')',
 '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

#include <iostream>
#include <stack>

class Solution
{
public:
    bool isValid(std::string s)
    {
        int length = s.length();
        if (length % 2 != 0)
        {
            return false;
        }
        std::stack<char> stack;
        for (int i = 0; i < length; i++)
        {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
            {
                stack.push(c);
            }
            else
            {
                if (stack.empty())
                {
                    return false;
                }
                char top = stack.top();
                if (c == ')' && top != '(')
                {
                    return false;
                }
                if (c == '}' && top != '{')
                {
                    return false;
                }
                if (c == ']' && top != '[')
                {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};

int main()
{
    Solution solution;
    std::string s = "[()]";
    bool result = solution.isValid(s);
    std::cout << result << std::endl;
    return 0;
}