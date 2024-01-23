#include<iostream>
#include<climits>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

class Stack {
    Node* head;
    int capacity;
    int currSize;
public:
    Stack(int c) {
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }

    bool isEmpty() {
        return this->head == NULL;
    }

    bool isFull() {
        return this->currSize == this->capacity;
    }

    void push(int data) {
        if (this->isFull()) {
            cout << "Overflow" << endl;
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }

    int pop() {
        if (this->isEmpty()) {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        Node* new_head = this->head->next;
        this->head->next = NULL;
        Node* toBeRemoved = this->head;
        int result = toBeRemoved->data;
        delete toBeRemoved;
        this->head = new_head;
        this->currSize--;
        return result;
    }

    int getTop() {
        if (this->isEmpty()) {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return this->head->data;
    }

    int size() {
        return this->currSize;
    }
};

int main() {
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << endl;
    st.push(4);
    st.push(5);
    cout << st.getTop() << endl;
    st.push(8);
    st.pop();
    st.pop();
    cout << st.getTop() << endl;
    return 0;
}
