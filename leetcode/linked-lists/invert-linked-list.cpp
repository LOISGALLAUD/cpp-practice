/*
Invert Linked List

The goal is to invert a linked list.
For example, given the linked list
9 -> 1 -> 5 -> 4, the result should be 4 -> 5 -> 1 -> 9.
*/

#include <iostream>

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
    ListNode *invertRecursive(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *newHead = invert(head->next);
        head->next->next = head;
        head->next = nullptr;

        return newHead;
    }
    ListNode *invert(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void printList(ListNode *head)
    {
        while (head != nullptr)
        {
            std::cout << head->val << " ";
            head = head->next;
        }
        std::cout << std::endl;
    }

    ListNode *generateRandomLinkedList(int size)
    {
        ListNode *head = new ListNode(rand() % 100);
        ListNode *curr = head;
        for (int i = 0; i < size - 1; i++)
        {
            curr->next = new ListNode(rand() % 100);
            curr = curr->next;
        }
        return head;
    }

    void deleteLinkedList(ListNode *head)
    {
        while (head != nullptr)
        {
            ListNode *toDelete = head;
            head = head->next;
            delete toDelete;
        }
    }
};

int main(void)
{
    Solution s;

    ListNode *l1 = s.generateRandomLinkedList(1e2);
    std::cout << "Original List: ";
    s.printList(l1);

    ListNode *newHead = s.invert(l1);

    std::cout << "Inverted List: ";
    s.printList(newHead);

    s.deleteLinkedList(newHead);

    return 0;
}
