#include<iostream>
using namespace std;
// int factorial(int n){
//     if(n == 1)return 1;
//     int ans = n * factorial(n - 1);

//     return ans;
// }
// int main(){
//     int result = factorial(5);
//     cout<<result;
//     return 0;
// }

int fib(int n){
    if(n == 0 or n == 1)return n;
    return fib(n - 1) + fib(n - 2);
}
int main(){
    int result = fib(6);
    cout<<result;
    return 0;
}
// SUM OF ALL DIGITS OF THE NUMBER
// int f(int n){
//     if(n <= 9 and n >= 0) return n;
//     return f(n/10) + (n % 10);
// }
// int main(){
//     int result = f(123456789);
//     cout<<result;
//     return 0;
// }

//FIND THE POWER OF THE NUMBER
// int f(int p, int q){
//     if(q == 0)return 1;
//     return p * f(p,q - 1);
// }
// int main(){
//     int result = f(2, 4);
//     cout<<result;
//     return 0;
// }

// OPTIMIZED CODE
// int f(int p, int q){
//     if(q == 0)return 1;
//     if(q % 2 == 0){
//         int result = f(p,q/2);
//         return result * result;
//     }
//     if(q % 2 != 0){
//         int result = f(p,(q-1)/2);
//         return p * result * result;
//     }
// }
// int main(){
//     int result = f(2,5);
//     cout<<result;
//     return 0;
// }


//ASSIGNMENT CODE

// #include<iostream>
// using namespace std;
// int pow_recursive(int p, int q){
//     if(q == 0) return 1;
//     if(q % 2 == 0){
//         int result = pow_recursive(p,q/2);
//         return result * result;
    
//     }
//     else{
//         int result = pow_recursive(p,(q - 1)/2);
//         return p * result * result;
//     }
// }
// int f(int n, int d){
//     if(n == 0) return 0;
//     return pow_recursive(n % 10,d) + f(n/10,d);
// }
// int main(){
//     int n = 252;
   
//     int no_of_digits = 0;
// int temp = n;
// while (temp > 0) {
//     temp = temp / 10;
//     no_of_digits++;
// }

//     int result = f(n,no_of_digits);
//     if(result == n){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0;
// 

// #include<iostream>
// using namespace std;
// int f(int n, int val){
//     int ans = 0;
//     if(n == 1 && val >= 0) return 1;

//     for(int i = 0;i <= val;i++){
//         ans += f(n - 1,val - i);
//     }
//     return ans;

    
// }
// int main(){
//     int n, val;
//     cout<<"Enter the val and n";
//     cin>>n;
//     cin>>val;
//     cout<<f(n, val);
//     return 0;

// }