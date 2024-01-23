#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>&v){
    int n = v.size();
    for(int i = 1;i < n;i++){
        int curr_index = v[i];
        int j = i - 1;
        while(j >= 0 and v[j] > curr_index){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = curr_index;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    insertionSort(v);
    for(int i = 0; i < n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}