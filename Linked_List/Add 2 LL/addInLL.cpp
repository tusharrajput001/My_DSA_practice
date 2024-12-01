#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};


// Solution
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyHead = new ListNode(-1);
        ListNode *curr = dummyHead;
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        int carry = 0;

        while (temp1 != NULL || temp2 != NULL)
        {
            int sum = carry;
            if (temp1)
                sum += temp1->data;
            if (temp2)
                sum += temp2->data;
            ListNode *newNode = new ListNode(sum % 10);
            carry = sum / 10;

            curr->next = newNode;
            curr = curr->next;

            if (temp1)
                temp1 = temp1->next;
            if (temp2)
                temp2 = temp2->next;
        }

        if (carry)
        {
            ListNode *newNode = new ListNode(carry);
            curr->next = newNode;
        }

        return dummyHead->next;
    }
};

// Helper function to create a linked list from a vector of integers
ListNode *createLinkedList(const std::vector<int> &values)
{
    ListNode *dummy = new ListNode();
    ListNode *current = dummy;
    for (int value : values)
    {
        current->next = new ListNode(value);
        current = current->next;
    }
    return dummy->next;
}

// Helper function to print a linked list
void printLinkedList(ListNode *head)
{
    while (head != nullptr)
    {
        std::cout << head->data;
        if (head->next != nullptr)
        {
            std::cout << " -> ";
        }
        head = head->next;
    }
    std::cout << std::endl;
}

int main()
{
    // Create test linked lists
    ListNode *l1 = createLinkedList({2, 4, 3}); // Represents the number 342
    ListNode *l2 = createLinkedList({5, 6, 4}); // Represents the number 465

    // Solve the problem
    Solution solution;
    ListNode *result = solution.addTwoNumbers(l1, l2);

    // Print the result
    std::cout << "Result: ";
    printLinkedList(result); // Expected: 7 -> 0 -> 8

    return 0;
}
