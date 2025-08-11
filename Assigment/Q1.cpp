// Q1. Implement a Circular Linked List
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
class CircularLinkedList {
public:   $
    Node* head = nullptr;
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
    void deleteNode(int val) {
        if (!head) return;
        Node* curr = head, *prev = nullptr;
        do {
            if (curr->data == val) {
                if (prev) prev->next = curr->next;
                else {
                    Node* last = head;
                    while (last->next != head) last = last->next;
                    head = head->next;
                    last->next = head;
                }
                delete curr;
                return; }
            prev = curr;
            curr = curr->next;
        } while (curr != head);
    }
    void traverse() {
        if (!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};
int main() {
    CircularLinkedList cll;

    // Inserting nodes
    cll.insert(10);
    cll.insert(20);
    cll.insert(30);
    cll.insert(40);

    cout << "Circular Linked List after insertion: ";
    cll.traverse();  // Expected: 10 20 30 40

    // Deleting a node
    cll.deleteNode(20);

    cout << "After deleting 20: ";
    cll.traverse();  // Expected: 10 30 40

    // Deleting head node
    cll.deleteNode(10);

    cout << "After deleting 10 (head): ";
    cll.traverse();  // Expected: 30 40

    return 0;
}
