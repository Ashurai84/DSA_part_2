// Q2. Delete N-th Node from End of List

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to delete N-th node from end
Node* deleteNthFromEnd(Node* head, int n) {
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* fast = dummy;
    Node* slow = dummy;

    for (int i = 0; i < n; ++i) fast = fast->next;

    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }

    Node* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    Node* result = dummy->next;
    delete dummy;
    return result;
}

// Helper to print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    // Create a simple list: 1 → 2 → 3 → 4 → 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    int n = 2;
    head = deleteNthFromEnd(head, n);

    cout << "After deleting " << n << "-th node from end: ";
    printList(head);

    return 0;
}
