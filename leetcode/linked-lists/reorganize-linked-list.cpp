/*
Reorganize Linked List

You are given the head of a singly linked-list.
The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes.
Only nodes themselves may be changed.
*/

#include <iostream>
#include <deque>

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *getMiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *next = NULL;
        while (head)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    void reorganize(ListNode *head)
    {
        ListNode *mid = getMiddle(head);
        ListNode *reversed = reverseList(mid->next);
        mid->next = NULL; // set next of middle element to null to avoid cyclic path

        while (head && reversed)
        {
            ListNode *nn = head->next;
            ListNode *rn = reversed->next;
            head->next = reversed;
            head->next->next = nn;
            head = nn;
            reversed = rn;
        }
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
        ListNode *head = new ListNode(rand() % 10);
        ListNode *curr = head;
        for (int i = 0; i < size - 1; i++)
        {
            curr->next = new ListNode(rand() % 10);
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
    Solution solution;
    ListNode *head = solution.generateRandomLinkedList(10);
    // solution.printList(head);
    solution.reorganize(head);
    // solution.printList(head);
    solution.deleteLinkedList(head);
    return 0;
}