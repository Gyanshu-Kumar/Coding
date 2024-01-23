#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void countSort(vector<int> &v){
    int n = v.size();
    // find the max element....
    int max_ele = INT_MIN;
    for(int i = 0;i < n;i++){
        max_ele = max(v[i], max_ele);
    }
    // create the frequency array..
    vector<int>freq(max_ele + 1, 0);
    for(int i = 0;i < n;i++){
        freq[v[i]]++;
    }
    // calculate the cumulative frequency
    for(int i = 1;i <= max_ele;i++){
        freq[i] += freq[i - 1];
    }
    //calculate the sorted array...
    vector<int>ans(n);
    for(int i = n - 1;i >= 0;i--){
        ans[--freq[v[i]]] = v[i];
    }
    //copy back ans array to original array
    for(int i = 0;i < n;i++){
        v[i] = ans[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    countSort(v);
    for(int i = 0;i < n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}