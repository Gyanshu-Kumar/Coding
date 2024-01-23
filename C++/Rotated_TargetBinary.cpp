#include <iostream>
#include <vector>
using namespace std;
int binarySearchRotatedSorted(vector<int> &input, int target) {
    int lo = 0;
    int hi = input.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (input[mid] == target)
            return mid;

        if (input[lo] <= input[mid]) { // Left side is sorted
            if (input[lo] <= target && target < input[mid])
                hi = mid - 1;
            else
                lo = mid + 1;
        } else { // Right side is sorted
            if (input[mid] < target && target <= input[hi])
                lo = mid + 1;
            else
                hi = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    int target;
    cin >> target;
    cout << binarySearchRotatedSorted(input, target) << "\n";
    return 0;
}
