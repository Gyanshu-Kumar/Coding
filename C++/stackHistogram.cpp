#include<iostream>
#include<vector>
#include<climits>
#include<stack>
#include<algorithm>
using namespace std;
int histogram(vector<int> &arr){
    int n = arr.size();
   
    stack<int>st;
    int ans = INT_MIN;

    st.push(0);
    for(int i = 0;i < n;i++){
        while(!st.empty() and arr[i] < arr[st.top()]){
           int el = arr[st.top()]; // current bar to be removed and whose ans to be calculated.
           st.pop();
           int nsi = i;
           int psi = (st.empty()) ? (-1) : st.top();
           ans = max(ans, el*(nsi - psi - 1));
            
        }
        st.push(i);
    }
    while(not st.empty()){
        int el = arr[st.top()]; // current bar to be removed and whose ans to be calculated.
           int nsi = n;
           int psi = (st.empty()) ? (-1) : st.top();
           ans = max(ans, el*(nsi - psi - 1));
        
        st.pop();
    }
    return ans;
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
    int ans  = histogram(v);
    cout<<ans<<endl;
    return 0;
}