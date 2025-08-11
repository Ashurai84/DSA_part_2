// Insert at the Beginning of a Linked List
// Problem: Write a function to insert a new node with a given value at the start of a singly linked list.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;  
    head = newNode;       
}


// 2. Insert at the End
// Problem: Add a node to the tail of the linked list.

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) { // Empty list
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


//  Insert at a Specific Position (Index)
// Problem: Given an index i, insert a node at that position.

void insertAtPosition(Node*& head, int val, int pos) {
    if (pos == 0) { // Insert at start
        insertAtBeginning(head, val);
        return;
    }
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of range\n";
        return;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}


// 4. Delete from the Beginning
// Problem: Delete the head node from a linked list.
void deleteFromBeginning(Node*& head) {
    if (head == NULL) return; // Empty list
    Node* temp = head;
    head = head->next;
    delete temp;
}





struct CNode {
    int data;
    CNode* next;
    CNode(int val) : data(val), next(NULL) {}
};

void insertInCircular(CNode*& head, int val, int afterVal) {
    CNode* newNode = new CNode(val);
    if (head == NULL) { // First node
        head = newNode;
        head->next = head;
        return;
    }
    CNode* temp = head;
    do {
        if (temp->data == afterVal) {
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);
}



// 6. Insert in a Doubly Linked List
// Problem: Insert a node between two existing nodes.
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
    DNode(int val) : data(val), prev(NULL), next(NULL) {}
};

void insertInDoubly(DNode* prevNode, int val) {
    if (prevNode == NULL) return;
    DNode* newNode = new DNode(val);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    newNode->prev = prevNode;
    if (newNode->next != NULL) {
        newNode->next->prev = newNode;
    }
}


// Delete from the End
// Problem: Delete the last node of the linked list.
void deleteFromEnd(Node*& head) {
    if (head == NULL) return;
    if (head->next == NULL) { // Only one node
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}


// Merge Two Lists by Inserting Nodes
// Problem: Merge two sorted lists into one by inserting nodes from one list into another.
Node* mergeSortedLists(Node* l1, Node* l2) {
    Node dummy(0);
    Node* tail = &dummy;

    while (l1 && l2) {
        if (l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = (l1) ? l1 : l2;
    return dummy.next;
}


