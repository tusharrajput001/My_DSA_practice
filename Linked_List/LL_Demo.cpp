#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data; // data  
    Node* next;   // Pointer

    // constructor
    public:
    Node(int data, Node* next1){
        this->data = data;
        next = next1;   
    }
};

int main(){
    vector<int> arr = {2,5,7,8};

    // Node y =  Node(arr[0], nullptr);
    // cout << y.data << endl;
    // cout << y.next << endl;

    Node* y =  new Node(arr[0], nullptr);
    cout << y->data;

}