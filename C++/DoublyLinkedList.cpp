#include <iostream>
#include<climits>
#include<vector>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int data) {
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtStart(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    void insertAtTail(int val) {
        Node* new_node = new Node(val);
        if (tail == NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
};
vector<int>pairSumDLL(Node* head, Node* tail, int x){
    vector<int>ans(2, -1);
    while(head != tail){
        int sum = head -> val + tail -> val;
        if(sum == x){
            ans[0] = head -> val;
            ans[1] = tail -> val;
            return ans;
        }
        if(sum > x){
            tail = tail -> prev;

        }
        else{
            head = head -> next;
        }
    }
    return ans;
}

int main() {
    DoublyLinkedList dll;
    dll.insertAtTail(2);
    dll.insertAtTail(5);
    dll.insertAtTail(6);
    dll.insertAtTail(8);
    dll.insertAtTail(10);
    
    
    dll.display();
   
    vector<int> ans = pairSumDLL(dll.head, dll.tail, 11);
    cout << ans[0] << " " << ans[1] <<endl;

    return 0;
}
