#include <iostream>
#include <algorithm> 
using namespace std;


void assign(int arr[],int n){
    sort(arr, arr + n);

    int ans[n];

    int p = 0,q = n - 1;
    for(int i = 0;i < n;i++){
        if((i + 1)%2 == 0)
             ans[i] = arr[q--];
        
        else
            ans[i] = arr[p++];
        
    }
    for(int i = 0;i < n;i++){
        cout<<ans[i]<<" ";
        
    }
}
int main(){
    int Arr[] =  { 1, 3, 2, 2, 5 };
    int n = sizeof(Arr)/sizeof(Arr[0]);
    assign(Arr, n);
    return 0;


}
