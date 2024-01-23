#include<iostream>
#include<vector>
using namespace std;

class Queue {
    int frontIndex; // Renamed from 'front' to 'frontIndex'
    int backIndex; // Renamed from 'back' to 'backIndex'
    vector<int> v;

public:
    Queue() {
        frontIndex = -1;
        backIndex = -1;
    }

    void enqueue(int data) {
        v.push_back(data);
        backIndex++;
        if (frontIndex == -1) // Adjusted condition to set frontIndex
            frontIndex = 0;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        frontIndex++;

        if (frontIndex > backIndex) { // Adjusted condition for clearing vector
            frontIndex = -1;
            backIndex = -1;
            v.clear();
        }
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return v[frontIndex];
    }

    bool isEmpty() {
        return frontIndex == -1 || frontIndex > backIndex;
    }
};

int main() {
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);

    while (!qu.isEmpty()) {
        cout << qu.getFront() << " ";
        qu.dequeue();
    }

    return 0;
}
