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

void insertBeforeNode(Node* node, int val){
    Node* back = node->prev;
    Node* newNode = new Node(val, node, back);
    back->next = newNode;
    node->prev = newNode;
}
void insertAfterNode(Node* node, int val){
    Node* front = node->next;
    Node* newNode = new Node(val, front, node);
    node->next = newNode;
    front->prev = newNode;
}




int main()
{
    vector<int> arr = {20, 15, 25, 16, 14};
    Node *head = convertArrtoDLL(arr);
    insertAfterNode(head->next->next,10);
    print(head);
    return 0;
}