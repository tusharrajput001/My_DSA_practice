#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

public:
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *convertArrtoDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node *insertBeforeHead(Node *head, int val)
{
    Node *newHead = new Node(val, head, nullptr);
    head->prev = newHead;
    return newHead;
}

Node *insertAfterHead(Node *head, int val)
{
    Node *newNode = new Node(val, head->next, head);
    head->next = newNode;
    if (newNode->next != nullptr)
    { // Check if there is a node after head
        newNode->next->prev = newNode;
    }
    return newNode;
}

int main()
{
    vector<int> arr = {20, 15, 25, 16, 14};
    Node* head = convertArrtoDLL(arr);
    // head = insertBeforeHead(head,10);
    insertAfterHead(head, 1);
    print(head);
    return 0;
}