
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Print Linked list Function
void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// Get The length of LL
int getLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    // Create Nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // Initializing the next pointer
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Create Head Node
    Node* head = first;

    // Print the linked list
    printLL(head);

    // Get the length of the linked list
    int length = getLength(head);
    cout << "Length of the linked list: " << length << endl;

    return 0;
}
