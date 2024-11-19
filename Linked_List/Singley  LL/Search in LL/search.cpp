#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

// constructors
public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};


// convert arr to Linked List
Node *convertArrtLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int checkIfPresent(Node *head, int x)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == x)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {2, 3, 4, 5, 6};
    Node *y = new Node(arr[0], nullptr);
    Node *head = convertArrtLL(arr);
    cout << checkIfPresent(head, 5);
}