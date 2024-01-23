#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int array[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin>>array[i][j];
        }
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                for (int i = 0; i < m; i++) {
                }
        for (int j = 0; j < i; j++) {
            std::cout << "  ";
        }
                cout<<array[i][j]<<" ";
            } cout<<endl;
        }
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int r1, c1;
//     cin >> r1 >> c1;

//     int A[r1][c1];
//     for(int i = 0; i < r1; i++){
//         for(int j = 0; j < c1; j++){
//             cin >> A[i][j];
//         }
//     }

//     int r2, c2;
//     cin >> r2 >> c2;

//     int B[r2][c2];
//     for(int i = 0; i < r2; i++){
//         for(int j = 0; j < c2; j++){
//             cin >> B[i][j];
//         }
//     }

//     if(c1 != r2){
//         cout << "Matrix multiplication is not possible for this input" << endl;
//     }
    
//     int C[r1][c2];
//     for(int i = 0; i < r1; i++){
//         for(int j = 0; j < c2; j++){
//             int value = 0;
//             for(int k = 0; k < r2; k++){
//                 value += A[i][k] * B[k][j];
//             }
//             C[i][j] = value;
//         }
//     }

//     for(int i = 0; i < r1; i++){
//         for(int j = 0; j < c2; j++){
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// PASCAL TRIANGLE.....
// #include<iostream>
// #include<vector>
// using namespace std;
//     vector<vector<int>> pascalTriangle(int n){
//     vector<vector<int>> pascal(n);
//     for(int i = 0;i < n;i++){
//         pascal[i].resize(i + 1);

//         for(int j = 0;j < i + 1;j++){
//             if(j == 0 || j == i){
//                 pascal [i][j] = 1;
//             }
//             else{
//                 pascal[i][j] = pascal[i - 1][j]+ pascal[i - 1][j - 1];
//             }
//         }
//     }
//     return pascal;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>>ans;
//     ans = pascalTriangle(n);

//     for(int i = 0;i < ans.size();i++){
//         for(int j = 0;j < ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


































