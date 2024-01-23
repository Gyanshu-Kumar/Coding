// 90 degree reverse of the array
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void rotateArray(vector<vector <int>> & vec){
//     int n = vec.size();
//     for(int i = 0;i < n;i++){
//         for(int j = 0;j < i;j++){
//             swap(vec[i][j],vec[j][i]);
//         }
//     }
//     for(int i = 0;i < n;i++){
//         reverse(vec[i].begin(),vec[i].end());
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int >> vec(n,vector<int>(n));

//     for(int i = 0;i < n;i++){
//         for(int j = 0;j < n;j++){
//             cin>>vec[i][j];
//         }
//     }
//     rotateArray(vec);
//     for(int i = 0;i < n;i++){
//         for(int j = 0;j < n;j++){
//             cout<<vec[i][j]<<" ";
            
//         }cout<<endl;
//     }
// }

// c++ program to print side of the numbers 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void spiralOrder(vector <vector <int>> & matrix){
//     int left = 0;
//     int right = matrix[0].size()-1;
//     int top = 0;
//     int bottom = matrix.size()-1;

//     int direction = 0;
//     while(left<= right && top <= bottom){
//          // left -> right
//          if(direction == 0){
//             for(int col = left;col <= right;col++){
//                 cout<<matrix[top][col]<<" ";
//             }
//             top++;

//          }
//          // top -> bottom
//          else if(direction == 1){
//             for(int row = top;row <= bottom;row++){
//                 cout<<matrix[row][right]<<" ";
//             }
//             right --;
//          }
//          //right -> left
//          else if(direction == 2){
//             for(int col = right;col >= left;col--){
//                 cout<<matrix[bottom][col]<<" ";
//             }
//             bottom --;
//          }
//          //bottom -> top
//          else{
//             for(int row = bottom;row >= top;row--){
//                 cout<<matrix[row][left]<<" ";
//             }
//             left++;
//          }
//          direction=(direction+1)%4;
//          //0,1,2,3,4
//     }
    
//     }
//     int main(){
//         int n, m;
        
//         cin>>n>>m;
//         vector<vector<int>>matrix(n,vector<int>(m));
//         for(int i = 0;i < n;i++){
//             for(int j = 0;j < m;j++){
//                 cin>>matrix[i][j];
//             }
//         }
//         spiralOrder(matrix);
//     return 0;
//     }


// c++ program to print side numbers in spiral sorting orders
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateSpiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n));

    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;

    int direction = 0;
    int value = 1;

    while (left <= right && top <= bottom) {
        if (direction == 0) {
            for (int i = left; i <= right; i++) {
                matrix[top][i] = value++;
            }
            top++;
        } else if (direction == 1) {
            for (int j = top; j <= bottom; j++) {
                matrix[j][right] = value++;
            }
            right--;
        } else if (direction == 2) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = value++;
            }
            bottom--;
        } else {
            for (int j = bottom; j >= top; j--) {
                matrix[j][left] = value++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return matrix;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> spiralMatrix = generateSpiralMatrix(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << spiralMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
