// #include<iostream>
// #include<vector>
// using namespace std;
// void f(int *arr,int n,int i, int sum,vector<int> &result ){
    
//     if(i == n){
//         result.push_back(sum);
//         return;
//     }
//     f(arr, n, i + 1,sum + arr[i],result);
//     f(arr, n, i + 1,sum,result);
// }
// int main(){
//     int arr[] = {2,4,5};
//     int n = 3;
//     vector<int>result;
//     f(arr,n,0,0 ,result);
//     for(int i = 0;i < result.size();i++){
//         cout<<result[i]<<" ";

//     }
//    return 0;
// }


//WORD...
#include<iostream>
#include<vector>
using namespace std;

void f(string &str,int i, string result, vector<string>&li){
    if(i == str.length()){
        li.push_back(result);
        return;
    }
    f(str,i + 1,result + str[i], li);
    f(str,i + 1, result, li);
}
int main(){
    vector<string>result;
    string str = "abc";
    f(str, 0, " ", result);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}