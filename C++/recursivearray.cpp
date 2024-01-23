// #include<iostream>
// using namespace std;
// int f(int *arr,int idx,int n){
//     if(idx == n) return n;
//     cout<<arr[idx]<<endl;
//     f(arr, idx + 1,n);
// }
// int main(){
//     int n = 5;
//     int arr[] = {6, 1, 9, 3, 4};
//     f(arr, 0, n);
//     return 0;
// }

// PRINT THE MAX ELEMENT IN THE ARRAY
// #include <iostream>
// #include <algorithm>
// #include <climits>
// #include<vector>

// using namespace std;

// int f(int *arr, int idx, int n) {
//     if (idx == n - 1) {
//         return arr[idx];
//     }
//     return max(arr[idx], f(arr, idx + 1, n));
// }

// int main() {
//     int arr[] = {3, 10, 2, 5};
//     int n = 4; 
//     cout << f(arr, 0, n);
//     return 0;
// }

// PRINT THE SUM OF ELEMENT OF THE ARRAY

// int f(int *arr,int idx,int n){
//     if(idx == n - 1){
//         return arr[idx];
//     }
//     return arr[idx]+ f(arr,idx + 1,n);
// }
// int main(){
//     int arr[] = {3,11,12,5};
//     int n = 4;
//     cout<<f(arr,0,n);
//     return 0;
// }

//CHECK A NUMBER IS PRESENT IN ARRAY OR NOT
// bool f(int *arr,int n,int i,int x){
//     if(i == n){
//     return false;
//     }
//     return (arr[i] == x) || f(arr, n, i + 1, x);
// }
// int main(){
//     int arr[] = {2,6,5,8,9};
//     int n = 5;
//     int x = 61;
//     bool result = f(arr, n, 0, x);
//     if(result) cout<<"Yes";
//     else cout<<"No";
//     return 0;
// }

// TARGET ELEMENT
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int>allIndex(vector<int>a, int target, int start){
//     if(start == a.size()){
//         vector<int>ans;
//         return ans;
//     }
//     vector<int>smallIndex = allIndex(a, target, start + 1);
//         if(a[start] == target){
//             vector<int>result(smallIndex.size()+1);

//             result[0] = start;

//             for(int i = 0;i < smallIndex.size();i++){
//                 result[i + 1] = smallIndex[i];
//             }
//             return result;
//         }
//         else{
//             return smallIndex;
//         }
    
// }
// int main(){
//     vector<int>a={2,2,3,3,3,4,4,2};
//     int target = 2;

//     vector<int> output = allIndex(a,target,0);
//     for(int i = 0;i < output.size();i++){
//         cout<<output[i]<<" ";
//     }
//    return 0;
// }

//RECURSIVE TRIANGLE WITH SUM...
// #include<iostream>
// using namespace std;

// void helper(int arr[], int size){
//     if(size < 1){
//         return;
//     }
//     for(int i = 0;i < size;i++){
//         if(i == size - 1){
//             cout<<arr[i]<<" ";
//         }
//         else{
//             cout<<arr[i]<<", ";
//         }
//     }
//     cout<<endl;
//     int level[size - 1];
//     for(int i = 0;i < size;i++){

//         int sum = arr[i] + arr[i + 1];
//         level[i] = sum;
//     }
//     helper(level, size - 1);
// }
// int main(){
//     int n;
//     cout<<"Enter the size";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter The elements of arr";

//     for(int i = 0;i < n;i++){
//         cin>>arr[i];
//     }
//     helper(arr, n);
//     return 0;
// }

// COMBINATION IN NUMBERS...
// #include <iostream>
// #include <vector>

// using namespace std;

// void combinations(const vector<int>& arr, int r, int start, vector<int>& current) {
//     if (r == 0) {
//         for (int num : current) {
//             cout << num << " ";
//         }
//         cout << endl;
//         return;
//     }

//     for (int i = start; i < arr.size(); ++i) {
//         current.push_back(arr[i]);
//         combinations(arr, r - 1, i + 1, current);
//         current.pop_back();
//     }
// }

// int main() {
    
//     vector<int> arr = {5, 4, 3, 2, 1};
//     int r = 2;

    
//     vector<int> current;
//     combinations(arr, r, 0, current);

//     return 0;
// }

// SAME CODE USING RECURSION
#include <iostream>
#include <vector>

using namespace std;

void generateCombinations(const vector<int>& arr, int r, int index, vector<int>& current) {
    
    if (r == 0) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    
    if (index == arr.size() || arr.size() - index < r) {
        return;
    }

   
    current.push_back(arr[index]);
    generateCombinations(arr, r - 1, index + 1, current);

   
    current.pop_back();
    generateCombinations(arr, r, index + 1, current);
}

int main() {
   
    vector<int> arr = {5, 4, 3, 2, 1};
    int r = 2;

    
    vector<int> current;  
    generateCombinations(arr, r, 0, current);

    return 0;
}
// Suppose you want to generate combinations of 2 elements from the array [1, 2, 3]. 
// The function would be called initially as generateCombinations(arr, 2, 0, current);. 
// In the recursive calls:

// First Recursive Call: generateCombinations(arr, r - 1, index + 1, current);

// r - 1 becomes 1.
// index + 1 becomes 1.
// This call is saying, 
// "I've chosen one element (at the current index), and now I need to choose 1 more element to complete a combination."

// Second Recursive Call: generateCombinations(arr, r - 1, index + 1, current);

// r - 1 becomes 0.
// index + 1 becomes 2.
// This call is saying, "I've chosen two elements (at the current index and the previous index), and now I need to choose 0 more elements to complete a combination."

// When r reaches 0, it means you have successfully chosen the required number of elements, 
// and the base case is triggered to print the current combination.

// I hope this helps clarify the role of r - 1 in the recursive calls. 
// If you have any specific questions or concerns, feel free to ask!





