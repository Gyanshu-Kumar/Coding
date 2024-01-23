#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    for(int i = 0;i < n;i++){
        cout<<"Enter the elements of v1"<<endl;
        cin>>v1[i];
    }
    for(int j = 0;j < m;j++){
        cout<<"Enter the elemets of v2"<<endl;
        cin>>v2[j];
    }
    int ans_sum = 0;
    set<int>s1;
    for(auto ele:v1){
        s1.insert(ele);
    }
    for(auto ele:v2){
        if(s1.find(ele) != s1.end()){
            ans_sum += ele;
        }
    }
    cout<<"Ans: "<<ans_sum<<endl;
    return 0;
}