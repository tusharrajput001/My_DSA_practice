#include <bits/stdc++.h>
using namespace std;

// Node class represents a
// node in a linked list
class Node
{
public:
    // Data stored in the node
    int data;

    // Pointer to the next node in the list
    Node *next;

    // Constructor with both data and
    // next node as parameters
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // Constructor with only data as a
    // parameter, sets next to nullptr
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *reverseLL(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        Node *front = temp->next;

        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}

Node *getKthNode(Node *temp, int k)
{
    k -= 1;
    while (temp != NULL && k > 0)
    {
        k--;
        temp = temp->next;
    }
    return temp;
}

Node *kReverse(Node *head, int k)
{
    Node *temp = head;
    Node *prevLast = NULL;

    while (temp != NULL)
    {
        Node *kthNode = getKthNode(temp, k);

        // if cant find another group
        if (kthNode == NULL)
        {
            if (prevLast)
            {
                prevLast->next = temp;
            }
            break;
        }

        // if u got the group

        Node *nextNode = kthNode->next;
        kthNode->next = NULL;

        reverseLL(temp);

        if (temp == head)
        {
            head = kthNode;
        }
        else
        {
            prevLast->next = kthNode;
        }

        prevLast = temp;
        temp = nextNode;
    }

    return head;
}

// Function to print the linked list
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Create a linked list with
    // values 5, 4, 3, 7, 9 and 2
    Node *head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(9);
    head->next->next->next->next->next = new Node(2);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
    head = kReverse(head, 4);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}