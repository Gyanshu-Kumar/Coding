#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l;
    for(int j = l;j < r;j++){
        if(arr[j] < pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[r]);
    return;
}
int KthSmallest(int arr[], int l,int r, int k){
    if(k > 0 && k <= r - l + 1){
        int pos = partition(arr, l, r);
        if(pos - l == k - 1){
            return arr[pos];
        }
        else if(pos - l > k - 1){
            return KthSmallest(arr, l, pos - 1,k);
        }
        else{
            return KthSmallest(arr, pos + 1,r, k - pos)
        }
    }
    return -1;
}
int main(){
    
}