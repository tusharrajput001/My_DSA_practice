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

Node *insertBeforeTail(Node *head, int val)
{
    if (head->next == NULL)
    {
        return insertBeforeHead(head, val);
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *back = tail->prev;
    Node *newNode = new Node(val, tail, back);
    back->next = newNode;
    tail->prev = newNode;
    return head;
}

Node *insertAfterTail(Node *head, int val)
{
    if (head->next == NULL)
    {
        return insertBeforeHead(head, val);
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    Node *backofTail = tail->prev;
    Node *newNode = new Node(69, nullptr, tail);
    tail->next = newNode;
    return head;
}

int main()
{
    vector<int> arr = {20, 15, 25, 16, 14};
    Node *head = convertArrtoDLL(arr);
    // head = insertBeforeHead(head,10);
    head = insertBeforeTail(head, 1);
    insertAfterTail(head, 69);
    print(head);
    return 0;
}