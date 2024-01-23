#include <iostream>
#include <stack>
using namespace std;
int Valid(string str) {
    int count = 0;
    stack<char> st;
    int n = str.size();
    for(int i = 0; i < n;i++){
        if(str[i] == '('){
            st.push('(');
        }
        else if(str[i] == ')'){
            if(!st.empty() and st.top() == '('){
                st.pop();
            }
            else{
                count ++;
            }

        }
    }
    count += st.size();
    return count;
}

int main() {
    string str = "(()))))))";
    cout << "Unmatched Parentheses: " << Valid(str) << endl;
    return 0;
}
