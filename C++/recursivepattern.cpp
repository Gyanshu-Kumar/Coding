#include<iostream>
using namespace std;

void rec(int n, int m,bool flag){
    cout<<m<<" ";
    if(flag == false && n == m)
    return;
    
    if(flag){
        if(m - 5 > 0)
        rec(n,m - 5,true);

        else
        rec(n, m - 5,false);
    }
    else
    rec(n, m + 5,false);

    
}
int main(){
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    rec(n,n,true);
    return 0;
}

// PRINTS FIRST N NATURAL NUMBERS
// void f(int n) {
//     if (n < 1) {
//         return;
//     }
    
//     f(n - 1);
//     cout << n << " ";
// }

// int main() {
//     int n = 6;
//     f(n);
//     return 0;
// }

//PRINT MULTIPLES...
// void f(int num, int k) {
//     if (k == 0) {
//         return;
//     }

//     f(num, k - 1);
//     cout << num * k << " ";
// }

// int main() {
//     int num = 3;
//     int k = 5;
//     f(num, k);
//     return 0;
// }

// int f(int n){
//     if(n == 0)return 0;

//     return f(n - 1) + ((n % 2 ==0)?(-n):(n));
// }
// int main(){
//     cout<<f(10)<<endl;
//     return 0;
// }