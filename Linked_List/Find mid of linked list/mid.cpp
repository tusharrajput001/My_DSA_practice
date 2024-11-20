
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Define a Node class for doubly linked list
class Node {
public:
    int data;   
    Node* next;     
    Node* back;     

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr) {   
    Node* head = new Node(arr[0]);  
    Node* prev = head;            

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp; 
        prev = temp;       
    }
    return head;  
}

void print(Node* head) {
    while (head != nullptr) {
        // Print the data in the tail node
        cout << head->data << " ";  
         // Move to the next node
        head = head->next;         
    }
}

// Bruteforce
// Node* findMiddle(Node* head){
//     Node* temp = head;
//     int cnt = 0;

//     while(temp != NULL){
//         cnt++;
//         temp = temp -> next;
//     }

//     int mid = cnt/2 + 1;
//     temp = head;

//     while(temp != NULL){
//         mid -= 1;
//         if(mid == 0)break;
//         temp = temp -> next;
//     }

//     return temp;
// }
 
//optimal approcch using slow and fast pointer
Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow ->next;
        fast = fast->next->next;
    }

    return slow;



}
int main() {
    vector<int> arr = {12, 5, 8, 7, 4};
    Node* head = convertArr2DLL(arr);
    Node* middleNode = findMiddle(head);
    cout << "The middle node value is: " << middleNode->data << endl;
    return 0;
}

