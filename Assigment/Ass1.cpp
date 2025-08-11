// // // // Q2. Delete N-th Node from End of List

// // // #include <iostream>
// // // using namespace std;

// // // struct Node {
// // //     int data;
// // //     Node* next;
// // //     Node(int val) : data(val), next(nullptr) {}
// // // };

// // // // Function to delete N-th node from end
// // // Node* deleteNthFromEnd(Node* head, int n) {
// // //     Node* dummy = new Node(0);
// // //     dummy->next = head;
// // //     Node* fast = dummy;
// // //     Node* slow = dummy;

// // //     for (int i = 0; i < n; ++i) fast = fast->next;

// // //     while (fast->next) {
// // //         fast = fast->next;
// // //         slow = slow->next;
// // //     }

// // //     Node* temp = slow->next;
// // //     slow->next = slow->next->next;
// // //     delete temp;

// // //     Node* result = dummy->next;
// // //     delete dummy;
// // //     return result;
// // // }

// // // // Helper to print list
// // // void printList(Node* head) {
// // //     while (head) {
// // //         cout << head->data << " ";
// // //         head = head->next;
// // //     }
// // //     cout << endl;
// // // }

// // // // Main function
// // // int main() {
// // //     // Create a simple list: 1 → 2 → 3 → 4 → 5
// // //     Node* head = new Node(1);
// // //     head->next = new Node(2);
// // //     head->next->next = new Node(3);
// // //     head->next->next->next = new Node(4);
// // //     head->next->next->next->next = new Node(5);

// // //     cout << "Original List: ";
// // //     printList(head);

// // //     int n = 2;
// // //     head = deleteNthFromEnd(head, n);

// // //     cout << "After deleting " << n << "-th node from end: ";
// // //     printList(head);

// // //     return 0;
// // // }
// // // Q3. Remove Duplicates from a Sorted Linked List
// // #include <iostream>
// // using namespace std;

// // // Node definition
// // struct Node {
// //     int data;
// //     Node* next;
// //     Node(int val) : data(val), next(nullptr) {}
// // };

// // // Function to remove duplicates from sorted list
// // Node* removeDuplicates(Node* head) {
// //     Node* curr = head;
// //     while (curr && curr->next) {
// //         if (curr->data == curr->next->data) {
// //             Node* temp = curr->next;
// //             curr->next = curr->next->next;
// //             delete temp;
// //         } else {
// //             curr = curr->next;
// //         }
// //     }
// //     return head;
// // }

// // // Helper to insert a node at the end
// // void insertTail(Node*& head, int val) {
// //     Node* newNode = new Node(val);
// //     if (!head) {
// //         head = newNode;
// //         return;
// //     }
// //     Node* temp = head;
// //     while (temp->next) temp = temp->next;
// //     temp->next = newNode;
// // }

// // // Helper to print the linked list
// // void printList(Node* head) {
// //     Node* temp = head;
// //     while (temp) {
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }
// //     cout << endl;
// // }

// // // Main function to test the code
// // int main() {
// //     Node* head = nullptr;

// //     // Sorted list with duplicates
// //     insertTail(head, 1);
// //     insertTail(head, 1);
// //     insertTail(head, 2);
// //     insertTail(head, 3);
// //     insertTail(head, 3);
// //     insertTail(head, 4);
// //     insertTail(head, 4);
// //     insertTail(head, 4);
// //     insertTail(head, 5);

// //     cout << "Original List: ";
// //     printList(head);

// //     head = removeDuplicates(head);

// //     cout << "List after removing duplicates: ";
// //     printList(head);

// //     return 0;
// // }


// // Q4. Merge Two Sorted Linked Lists
// // Q4. Merge Two Sorted Linked Lists
// #include <iostream>
// using namespace std;

// // Node structure
// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// // Function to merge two sorted linked lists
// Node* mergeSortedLists(Node* l1, Node* l2) {
//     Node dummy(0);  // Dummy node to simplify logic
//     Node* tail = &dummy;

//     while (l1 && l2) {
//         if (l1->data < l2->data) {
//             tail->next = l1;
//             l1 = l1->next;
//         } else {
//             tail->next = l2;
//             l2 = l2->next;
//         }
//         tail = tail->next;
//     }

//     // Attach remaining nodes
//     tail->next = l1 ? l1 : l2;

//     return dummy.next;
// }

// // Helper to insert node at tail
// void insertTail(Node*& head, int val) {
//     Node* newNode = new Node(val);
//     if (!head) {
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next) temp = temp->next;
//     temp->next = newNode;
// }

// // Helper to print list
// void printList(Node* head) {
//     while (head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// // Main function to test merging
// int main() {
//     Node* list1 = nullptr;
//     Node* list2 = nullptr;

//     // Sorted list 1: 1 → 3 → 5
//     insertTail(list1, 1);
//     insertTail(list1, 3);
//     insertTail(list1, 5);

//     // Sorted list 2: 2 → 4 → 6
//     insertTail(list2, 2);
//     insertTail(list2, 4);
//     insertTail(list2, 6);

//     cout << "List 1: ";
//     printList(list1);

//     cout << "List 2: ";
//     printList(list2);

//     Node* merged = mergeSortedLists(list1, list2);

//     cout << "Merged List: ";
//     printList(merged);

//     return 0;
// }


// Q5. Implement a Singly Linked List from Scratch
#include <iostream>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Singly Linked List class
class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    // Insert at head
    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at tail
    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    // Delete a node by value
    void deleteNode(int val) {
        if (!head) return;
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* curr = head;
        while (curr->next && curr->next->data != val) {
            curr = curr->next;
        }
        if (curr->next) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
    }

    // Search for a value
    bool search(int val) {
        Node* temp = head;
        while (temp) {
            if (temp->data == val)
                return true;
            temp = temp->next;
        }
        return false;
    }

    // Print the list
    void traverse() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function to test
int main() {
    SinglyLinkedList list;

    // Insert at head and tail
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtTail(4);
    list.insertAtTail(5);

    cout << "List after insertions: ";
    list.traverse();  // Output: 2 3 4 5

    // Search
    cout << "Is 3 in the list? " << (list.search(3) ? "Yes" : "No") << endl;
    cout << "Is 10 in the list? " << (list.search(10) ? "Yes" : "No") << endl;

    // Delete a node
    list.deleteNode(3);
    cout << "List after deleting 3: ";
    list.traverse();  // Output: 2 4 5

    list.deleteNode(2);
    cout << "List after deleting 2 (head): ";
    list.traverse();  // Output: 4 5

    return 0;
}
