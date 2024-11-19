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


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data<< " ";
        temp = temp ->next;
    }
    cout << endl;
}


Node* convertArrtoDLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* prev = head;
    head = head->next;
    head->prev =nullptr;
    prev->next = nullptr;

    delete prev;
    return head;

}



int main(){
    vector<int> arr = {20,10,25,16,14};
    Node* head = convertArrtoDLL(arr);
    head = deleteHead(head);
    print(head);
    return 0;
}