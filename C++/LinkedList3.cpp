#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};
class LinkedList{
    public:
    int val;
    Node* head;
    LinkedList(){
        head = NULL;
    }
    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new_node;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> val<<"->";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }
};
void removekthNodeFromEnd(Node* &head,int k){
    Node* ptr1 = head;
    Node* ptr2 = head;

    int count = k;
    while(count--){
        ptr2 = ptr2 -> next;
    }
    if(ptr2 == NULL){
        Node* temp = head;
        head = head -> next;
        free(temp);
        return;
    }
    while(ptr2 -> next != NULL){
        ptr2 = ptr2 -> next;
        ptr1 = ptr1 -> next;
    }
    Node* temp = ptr1 -> next;
    ptr1 -> next = ptr1 -> next -> next;
    free(temp);
    return;

}
int main(){
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.display();
    removeKthNodeFromEnd(ll1.head,3);
    ll1.display();
    return 0;
}