#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];

    }
    const int N = 1e5 + 10;// 1e5 means 10 to the power 5.
    vector<int> freq(N, 0);
    for(int i = 0;i<n;i++){
        freq[v[i]]++;  // this line shows how many time element present..
    }
    cout<<"Enter quaries: ";
    int q;
    cin>>q;

    while (q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }

    return 0;
}