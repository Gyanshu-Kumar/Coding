#include<iostream>
#include<stack>
using namespace std;
void reverseStack(vector<int> &arr){
    stack<int>st;
    int maxsize = 10;
    int n = st.size();
    bool isFull(){
    if(st.size() == maxsize){
        cout<<"Stack is Full"<<endl;
    }
}
    bool isEmpty(){
    if(st.size() == 0){
        cout<<"Stack is empty"<<endl;
    }
}
    for(int i = 0;i < n;i++){
        st.push(arr[i]);
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
    }
    
    
}
int main() {
    push(50); 
    push(30); 
    push(100);
    pop(); 
    pop();   

    return 0;
}
