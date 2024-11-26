// Bruteforce Approach
//  #include <iostream>
//  #include <bits/stdc++.h>

// using namespace std;

// // Node class represents a
// // node in a linked list
// class Node {
// public:
//     // Data stored in the node
//     int data;

//     // Pointer to the next node in the list
//     Node* next;

//     // Constructor with both data and
//     // next node as parameters
//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }

//     // Constructor with only data as a
//     // parameter, sets next to nullptr
//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// int lengthOfLoop(Node* head) {
//     unordered_map<Node* , int> visitedNodes;
//     int timer = 0;

//     Node*  temp = head;

//     while(temp != NULL){
//         // if revisiting a node
//         if(visitedNodes.find(temp) != visitedNodes.end()){
//             int looplen = timer - visitedNodes[temp];
//             return looplen;
//         }

//         visitedNodes[temp] = timer;
//         temp = temp -> next;
//         timer++;
//     }
// }

// int main() {
//     // Create a sample linked
//     // list with a loop

//     Node* head = new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(3);
//     Node* fourth = new Node(4);
//     Node* fifth = new Node(5);

//     // Create a loop from
//     // fifth to second
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     // This creates a loop
//     fifth->next = second;

//     int loopLength = lengthOfLoop(head);
//     if (loopLength > 0) {
//         cout << "Length of the loop: " << loopLength << endl;
//     } else {
//         cout << "No loop found in the linked list." << endl;
//     }

//     return 0;
// }

// Optimal approach (Tortoise and hare method)

// Bruteforce Approach
#include <iostream>
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

int findLen(Node *slow, Node *fast)
{
    int cnt = 1;
    fast = fast->next;
    while (slow != fast)
    {
        cnt++;
        fast = fast->next;
    }

    return cnt;
}

int lengthOfLoop(Node *head)
{

    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        int cnt = 1;

        if (slow == fast)
        {
            return findLen(slow, fast);
        }
    }
    return 0;
}

int main()
{
    // Create a sample linked
    // list with a loop

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    // Create a loop from
    // fifth to second
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // This creates a loop
    fifth->next = second;

    int loopLength = lengthOfLoop(head);
    if (loopLength > 0)
    {
        cout << "Length of the loop: " << loopLength << endl;
    }
    else
    {
        cout << "No loop found in the linked list." << endl;
    }

    return 0;
}
