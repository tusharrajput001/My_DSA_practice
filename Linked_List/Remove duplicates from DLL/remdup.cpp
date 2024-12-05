#include <bits/stdc++.h>
using namespace std;

// Definition for the doubly linked list node
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Solution {
public:
    Node* removeDuplicates(Node* head) {
        Node* temp = head;
        while (temp != nullptr && temp->next != nullptr) {
            Node* nextNode = temp->next;
            while (nextNode != nullptr && nextNode->data == temp->data) {
                Node* duplicate = nextNode;
                nextNode = nextNode->next;
                free(duplicate); // Deallocate memory for the duplicate node
            }
            temp->next = nextNode;
            if (nextNode != nullptr) {
                nextNode->prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};

// Helper functions for testing
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;

    Node* head = new Node(values[0]);
    Node* current = head;
    for (size_t i = 1; i < values.size(); ++i) {
        Node* newNode = new Node(values[i]);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    return head;
}

// Main function to test the implementation
int main() {
    vector<int> values = {1, 1, 2, 3, 3, 4, 5, 5};
    Node* head = createList(values);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.removeDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}
