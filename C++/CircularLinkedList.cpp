#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() { // Corrected the constructor name
        head = NULL;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->val << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void insertAtStart(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            new_node->next = head;
        } else {
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            tail->next = new_node;
            new_node->next = head;
            head = new_node;
        }
    }
};

int main() {
    LinkedList cll;
    cll.insertAtStart(3);
    cll.insertAtStart(2);
    cll.insertAtStart(1);
    cll.display();

    return 0;
}
