#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&input, int target){
    int lo = 0;
    int hi = input.size() - 1;
    while(lo < hi){
        int mid = (lo + hi) / 2;
        if(input[mid] == target) return mid;
        else if(input[mid] < target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int>input{4, 5, 7, 15, 24, 45, 50};
    int target = 15;
    cout<<binarySearch(input, target)<<"\n";
    return 0;
}