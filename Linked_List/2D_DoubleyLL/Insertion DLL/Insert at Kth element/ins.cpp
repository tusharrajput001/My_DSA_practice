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

Node *insertBeforeKthElement(Node *head, int k, int val)
{
    if (k == 1)
    {
        return insertBeforeHead(head, val);
    }

    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }

    Node *back = temp->prev;
    Node *newNode = new Node(val, temp, back);
    back->next = newNode;
    temp->prev = newNode;
    return head;
}

Node *insertAfterKthElement(Node *head, int k, int val)
{
    if (k == 1)
    {
        return insertAfterHead(head, val);
    }

    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }

    Node *afterK = temp->next;
    Node *newNode = new Node(val, afterK, temp);
    temp->next = newNode;
    afterK->prev = newNode;
    return head;
}

int main()
{
    vector<int> arr = {20, 15, 25, 16, 14};
    Node *head = convertArrtoDLL(arr);
    head = insertAfterKthElement(head, 3, 69);
    print(head);
    return 0;
}