// #include<iostream>
// using namespace std;
// int sqrt(int x){
//     int lo = 1;
//     int hi = x;
//     int ans = -1;
//     while(lo <= hi){
//         int mid = lo + (hi - lo)/2;
//         if(mid * mid <= x){
//             ans = mid;
//             lo = mid + 1;
//         }
//         else{
//             hi = mid - 1;
//         }
//     }
//     return ans;
// }
// int main(){
//     cout<<sqrt(100);
//     return 0;
// }

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    void permutations(int idx, vector<int>& nums, set<vector<int>>& uniquePerms) {
        if (idx == nums.size()) {
            uniquePerms.insert(nums);  // Use set to store unique permutations
            return;
        }
        for (int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);
            permutations(idx + 1, nums, uniquePerms);
            swap(nums[idx], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        set<vector<int>> uniquePerms;  // Use set to store unique permutations
        permutations(0, nums, uniquePerms);

        // Convert set to vector for returning the result
        vector<vector<int>> ans(uniquePerms.begin(), uniquePerms.end());
        return ans;
    }
};
int main() {
    Solution solution;

    // Test the permute function
    vector<int> input = {1, 1, 2};
    vector<vector<int>> result = solution.permute(input);

    // Display the result
    cout << "Permutations of {1, 2, 3} without duplicates:" << endl;
    for (const auto& permutation : result) {
        cout << "[ ";
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}