#include <iostream>
using namespace std;

// Definition of the Node class
class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        this->data = 0;
        this->next = nullptr;
    }

    // Constructor with data parameter
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    // Constructor with data and next parameters
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

// Function to sort the linked list with values 0, 1, and 2
Node* sortList(Node* head) {
    // Handle edge cases for empty or single-node list
    if (!head || !head->next) {
        return head;
    }

    // Create dummy heads for 0s, 1s, and 2s
    Node zeroDummy(-1), oneDummy(-1), twoDummy(-1);
    Node* zero = &zeroDummy;
    Node* one = &oneDummy;
    Node* two = &twoDummy;

    // Traverse the original list and segregate nodes
    Node* temp = head;
    while (temp) {
        if (temp->data == 0) {
            zero->next = temp;
            zero = zero->next;
        } else if (temp->data == 1) {
            one->next = temp;
            one = one->next;
        } else {  // temp->data == 2
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    // Connect the lists
    zero->next = oneDummy.next ? oneDummy.next : twoDummy.next;
    one->next = twoDummy.next;
    two->next = nullptr;

    // Return the head of the merged list
    return zeroDummy.next;
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
Node* createList(int arr[], int n) {
    if (n == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < n; i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

// Main function to test the sortList function
int main() {
    int arr[] = {1, 2, 0, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    head = sortList(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
