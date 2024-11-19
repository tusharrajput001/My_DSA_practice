#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;   // data
    Node *next; // Pointer

    // constructor
public:
    Node(int data)
    {
        this->data = data; 
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

int lengthOfLL(Node* head){
    int cnt = 0;
    Node *temp = head;
    while (temp) {
        temp = temp->next;
         cnt++;
    }
    return cnt;
   
}

int CheckIfPresent(Node* head, int val){
    Node *temp = head;
    while (temp) {
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}


int main()
{
    vector<int> arr = {2, 12, 32, 35};
    Node *head = convertArr2LL(arr);
    Node *temp = head;
    // while (temp) {
    //     cout << temp->data << " ";  // Print the values
    //     temp = temp->next;
    // }
    // cout << lengthOfLL(head);

    cout << CheckIfPresent(head,32);

}
