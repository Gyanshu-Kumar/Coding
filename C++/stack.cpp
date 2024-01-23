#include<iostream>
#include<stack>
using namespace std;

void removeAnyIndex(stack<int> &st, int idx) {
    if (idx >= st.size()) {
        // If the index is out of bounds, return as there's nothing to remove
        return;
    }

    stack<int> temp;

    // Move elements to temp stack until the element at the desired index is reached
    for (int i = 0; i < idx; ++i) {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }

    // Skip the element at the given index
    st.pop();

    // Restore remaining elements from temp stack
    while (!temp.empty()) {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // Trying to remove element at index 5 (out of bounds)
    removeAnyIndex(st, 1);

    // Display remaining elements in the stack
    while (!st.empty()) {
        int curr = st.top();
        st.pop();
        cout << curr << endl;
    }

    return 0;
}
