#include <iostream>
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

    LinkedList() {
        head = NULL;
    }

    void insert(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

Node* deleteDuplicatesNodes(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* dummy = new Node(0);
    dummy -> next = head;
    Node* prev = dummy;
    Node* current = head;
    while(current && current -> next){
        if(current -> val == current -> next -> val){
            int duplicateValue = current -> val;
            while(current && current -> val == duplicateValue){
                Node* temp = current;
                current = current -> next;
                delete temp;
            }
            prev -> next = current;
        } 
        else {
            prev = current;
            current = current->next;
        }
    }
    head = dummy -> next;
    delete dummy;
    return head;
};
int main() {
    LinkedList ll;
    ll.insert(1);
    ll.insert(1);
    ll.insert(2);
    ll.insert(2);
    ll.insert(3);
    ll.display();

    ll.head = deleteDuplicatesNodes(ll.head);
    ll.display();

    return 0;
}
