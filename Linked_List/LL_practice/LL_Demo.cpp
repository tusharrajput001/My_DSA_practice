// Implementation of Node

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;   // data
//     Node *next; // Pointer

//     // constructor
// public:
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// int main()
// {
//     vector<int> arr = {2, 5, 7, 8};

//     Node *node1 = new Node(arr[0]);
//     cout << node1->data << endl;
//     cout << node1->next << endl;
// }

// Insert Node at head or tail

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;   // data
        Node *next; // Pointer

    // constructor
    public:
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};




void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}



void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}


void InsertAtPosition(Node* &tail, Node *&head,int position, int d){
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    Node* nodeToInsert =  new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
    }

}



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




int main()
{
    // created a new node
    Node *node1 = new Node(10);
    cout << node1->data << endl;    //  10
    cout << node1->next << endl;    // 0x0 null 

    // head pointed to node1
    Node *head = node1;  // head - 10 
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    print(head);

    Node *tail = node1;  // tail - 10
    InsertAtTail(tail, 20);
    InsertAtTail(tail, 25);
    print(head);

    InsertAtPosition(tail,head,5,30);  
    print(head);
}