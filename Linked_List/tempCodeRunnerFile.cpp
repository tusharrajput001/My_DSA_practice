#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;   // data
    Node *next; // Pointer

    // constructor
public:
    Node(int data)
    {
        data = data;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> arr)
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

int main()
{
    vector<int> arr = {2, 12, 32, 35};
    Node *head = convertArr2LL(arr);
    Node *temp = head;
    while(temp){
        cout<< temp->data << " ";
        temp = temp->next;
    }
}   