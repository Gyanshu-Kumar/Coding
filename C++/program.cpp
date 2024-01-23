// #include<iostream>
// #include<vector>
// using namespace std;

// void PrintSubArray(int arr[], int start, int end, vector<int> &ans) {
//     if (start == end) {
//         return;
//     }

//     for (int i = start; i < end; i++) {
//         int sum = 0;
//         for (int j = start; j <= i; j++) {
//             cout << arr[j] << " ";
//             sum += arr[j];
//         }
//         ans.push_back(sum);
//         cout << endl;
//     }

//     PrintSubArray(arr, start + 1, end, ans);
// }

// int main() {
//     int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     vector<int> ans;
//     PrintSubArray(arr, 0, n, ans);

//     cout << "Subarray sums: ";
//     for (int sum : ans) {
//         cout << sum << " ";
//     }

//     return 0;
// }
// C++ program to find Majority
// element in an array
// #include <bits/stdc++.h>
// using namespace std;

// int findPairs(int arr[], int n, int x) {
//     int left = 0;
//     int right = n - 1;
//     int count = 0;  // Initialize a count variable to keep track of pairs

//     while (left < right) {
//         int currentSum = arr[left] + arr[right];

//         if (currentSum == x) {
//             count++;
//             left++;     // Increment left pointer to find more pairs
//             right--;    // Decrement right pointer to find more pairs
//         } else if (currentSum < x) {
//             left++;
//         } else {
//             right--;
//         }
//     }

//     return count;  // Return the count of pairs
// }

// int main() {
//     int arr[] = {2, 5, 6, 7, 8, 10, 11};
//     int x = 15;
//     int size = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + size);

//     int pairsCount = findPairs(arr, size, x);

//     if (pairsCount > 0) {
//         cout << "Number of pairs with sum " << x << ": " << pairsCount << endl;
//     } else {
//         cout << "No pairs with sum " << x << " found in the array." << endl;
//     }

//     return 0;
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int findPairs(int arr[], int x, int n) {
//     int left = 0;
//     int right = n - 1;
//     int count = 0;

//     while (left < right) {
//         int currentSum = arr[left] + arr[right];

//         if (currentSum == x) {
//             count++;
//             left++;
//             right--;
//         } else if (currentSum < x) {
//             left++;
//         } else {
//             right--;
//         }
//     }
//     return count;
// }

// int main() {
//     int arr[] = {2, 5, 6, 7, 8, 10, 9, 11};
//     int x = 15;
//     int size = sizeof(arr) / sizeof(arr[0]);
//     sort(arr, arr + size);

//     int pairscount = findPairs(arr, x, size);

//     if (pairscount > 0) {
//         cout << "Number of pairs with sum " << x << ": " << pairscount << endl;
//     } else {
//         cout << "No pairs with sum " << x << " found in the array." << endl;
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// string countSort(string str){
//     vector<int>freq(26,0);
//     for(int i = 0;i < str.length();i++){
//         int index = str[i] - 'a';
//         freq[index]++;
//     }
//     int j = 0;
//     for(int i = 0;i < 26;i++){
//         while(freq[i]--){
//             str[j++] = i + 'a';
//         }
//     }
//     return str;
// }
// int main(){
//     string str;
//     cin>>str;
//     cout<<countSort(str)<<endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// bool isAnagram(string s1, string s2)
// {
//      vector<int>freq(26, 0);

//      if(s1.length() != s2.length()){
//         return false;
//      }
//      for(int i = 0;i < s1.length();i++){
//         freq[s1[i]- 'a']++;
//         freq[s2[i] - 'a']--;
//      }
//      for(int i = 0;i < 26;i++){
//         if(freq[i] != 0){
//             return false;
//         }
//      }
//      return true;
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     if(isAnagram(s1,s2)){
//         cout<<"Strings are anagram"<<endl;
//     }
//     else{
//         cout<<"Strings are not anagram"<<endl;
//     }
//     return 0;

// }
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// bool isIsomorphic(string s1, string s2){
//     vector<int>v1(128, -1);
//     vector<int>v2(128, -1);

//     if(s1.size() != s2.size()){
//         return false;
//     }
//     for(int i = 0;i < s1.size();i++){
//      if(v1[s1[i]] != v2[s2[i]]){
//         return false;
//      }

//         v1[s1[i]] = v2[s2[i]] = i;

//     }
//     return true;
// }
// int main(){
//     string s1, s2;
//     cin>>s1>>s2;

//     if(isIsomorphic(s1,s2)){
//         cout<<"They are isomorphic"<<endl;
//     }
//     else{
//         cout<<"They are not isomorphic"<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// string LongetsCommonPrefix(vector<string> &str)
// {
// sort(str.begin(), str.end());

// string s1 = str[0];
// int i = 0;
// string s2 = str[str.size() - 1];
// int j = 0;

// string ans = "";
// while (i < s1.size() && j < s2.size())
// {
//     if (s1[i] == s2[j])
//     {
//         ans += s1[i];
//         i++;
//         j++;
//     }
//     else
//     {
//         break;
//     }
// }
// return ans;

// string s1 = str[0];
//     int ans_length = s1.size();
//     for(int i = 0;i < str.size();i++){
//         int j = 0;
//         while(j < s1.size() && j < str[i].size() && s1[j] == str[i][j]){
//             j++;
//         }
//         ans_length = min(ans_length, j);
//     }
//     string ans = s1.substr(0, ans_length);
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter no of String :";
//     cin >> n;
//     cout << "Enter Strings :";
//     vector<string> str(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> str[i];
//     }
//     cout << "LongetsCommonPrefix :" << LongetsCommonPrefix(str) << endl;

//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// using namespace std;

// string decodeString(string s) {
//     string result = "";  
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] != ']') {
//             result.push_back(s[i]);
//         } else {
//             string str = "";  
//             while (!result.empty() && result.back() != '[') {
//                 str.push_back(result.back()); 
//                 result.pop_back();
//             }
//             reverse(str.begin(), str.end());  
//             result.pop_back(); 

//             string num = ""; 
//             while (!result.empty() && isdigit(result.back())) {
//                 num.push_back(result.back());  
//                 result.pop_back();
//             }
//             reverse(num.begin(), num.end()); 
//             int int_num = stoi(num);

//             while (int_num) {
//                 result += str;  
//                 int_num--;
//             }
//         }
//     }
//     return result;
// }

// int main() {
//     string str;
//     cin >> str;
//     cout << decodeString(str) << endl;

//     return 0;
// }
// #include <iostream>
// #include <string>
// #include<bits/stdc++.h>
// using namespace std;

// int LongestOnes(string str, int k) {
//     int start = 0;
//     int end = 0;
//     int zero_count = 0;
//     int max_count = 0;
    
//     for (; end < str.length(); end++) {
//         if (str[end] == '0') {
//             zero_count++;
//         }
        
//         while (zero_count > k) {
//             if (str[start] == '0')zero_count--; 
//             start++;
//         }
        
//         max_count = max(max_count, end - start + 1);
//     }
    
//     return max_count;
// }

// int main() {
//     string str;
//     cout << "Enter the binary String: ";
//     cin >> str;
    
//     int k;
//     cout << "Enter max: ";
//     cin >> k;
//     cout << LongestOnes(str, k);

//     return 0;
// }

#include <iostream>
using namespace std;

int findTargetElement(int nums[], int size) {
    int target = 22;
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 22, 23};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int result = findTargetElement(arr, size);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
