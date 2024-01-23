// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
// int maximumOnesRows(vector<vector<int>>&v){
//     int maxOnes = INT_MIN;
//     int maxOnesRows = -1;
//     int columns = v[0].size();
//     for(int i = 0;i < v.size();i++){
//         for(int j = 0;j < v[i].size();j++){
//         if(v[i][j] == 1){
//             int numberOfOnes = columns - j;
//             if(numberOfOnes > maxOnes){
//                 maxOnes = numberOfOnes;
//                 maxOnesRows = i;
//             }
//             break;

//         }

//         }
//     }
//     return maxOnesRows;
// }
// int maximumOnesRows(vector<vector<int>>&v){
//     int maxOnes = INT_MIN;
//     int maxOnesRows = -1;
//     int columns = v[0].size();
//     for(int i = 0;i < v.size();i++){
//         for(int j = 0;j < v[i].size();j++){
//            if(v[i][j] == 1){
//             int numberOfOnes = columns - j;
//             if(numberOfOnes > maxOnes){
//                 maxOnes = numberOfOnes;
//                 maxOnesRows = i;
//               }
//               break;

//            } 
//         }
//     }
//     return maxOnesRows;
// }

// int main(){
//     int n;
//     int m;
//     cin>>n>>m;
//     vector<vector<int>> vec(n, vector<int>(m));
//     for(int i = 0;i < n;i++){
//         for(int j = 0;j < m;j++){
//             cin>>vec[i][j];
//         }
//     }
//     int result = maximumOnesRows(vec);
//     cout<<result<<endl;
// }


#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    int current = 1;
    int matrix[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            matrix[i][j] = current;
            current += 1;
        }
    }

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
    //         if (j < i) {
    //             cout << "  "; 
    //         } else {
                cout << matrix[i][j] << " ";
    //         }
        }
        cout << endl;
    }

    return 0;
}
