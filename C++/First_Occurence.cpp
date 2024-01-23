#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>&input, int target){
    int lo = 0;
    int hi = input.size() - 1;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(input[mid] == target){ 
        ans = mid;
        hi = mid - 1;
        }
        else if(input[mid] > target){ 
            hi = mid - 1;
        }
        else{
        lo = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    cout<<firstOccurence(arr, target);
    return 0;
}