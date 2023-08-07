/*
Add Two Numbers

You are given two non-empty linked lists representing
two non-negative integers. The digits are stored in reverse order,
and each of their nodes contains a single digit. Add the two numbers
and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero,
except the number 0 itself.
*/

#include <iostream>
#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    std::vector<int> getNum(ListNode *l)
    {
        std::vector<int> num;
        while (l != nullptr)
        {
            num.push_back(l->val);
            l = l->next;
        }
        return num;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        std::vector<int> num1 = getNum(l1);
        std::vector<int> num2 = getNum(l2);
        int i = 0;
        int carry = 0;

        // Add the two numbers for each digit
        while (i < num1.size() || i < num2.size() || carry)
        {
            int digitSum = (i < num1.size() ? num1[i] : 0) + (i < num2.size() ? num2[i] : 0) + carry;
            carry = digitSum / 10;
            digitSum %= 10;
            temp->next = new ListNode(digitSum);
            temp = temp->next;
            i++;
        }
        return dummy->next;
    }
};

int main()
{
    ListNode *l1 = new ListNode(9, new ListNode(9, new ListNode(5)));
    ListNode *l2 = new ListNode(2, new ListNode(8, new ListNode(2)));

    Solution s;
    ListNode *sum = s.addTwoNumbers(l1, l2);

    ListNode *temp = l1;
    while (temp != nullptr)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    temp = l2;
    while (temp != nullptr)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "| ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "V ";
    }
    std::cout << std::endl;

    temp = sum;
    while (temp != nullptr)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    return 0;
}
