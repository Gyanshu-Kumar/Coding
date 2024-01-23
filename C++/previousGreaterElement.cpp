#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int>pge(vector<int> &arr){
    int n = arr.size();
    reverse(arr.begin(),arr.end());
    vector<int>output(n, -1);
    stack<int>st;
    st.push(0);
    for(int i = 0;i < n;i++){
        while(!st.empty() and arr[i] > arr[st.top()]){
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        output[st.top()];
        st.pop();
    }
    reverse(output.begin(),output.end());
    reverse(arr.begin(),arr.end());
    return output;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>res = pge(v);
    for(int i = 0;i < res.size();i++){
        cout<<res[i]<<" ";
    }
}
