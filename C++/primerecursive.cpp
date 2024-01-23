// #include<iostream>
// using namespace std;

// bool isPrime(int n, int i = 2){
//     if(n <= 2) return (n == 2) ? true : false;
//     if( n % i == 0) return false;
//     if(i * i > n) return true;
//     return isPrime(n,i + 1);
// }
// int main(){
//     int n = 7;
//     if(isPrime(n)) cout<<"Yes";
//     else cout<<"No";
//     return 0;
// }

#include<iostream>
using namespace std;
int checkPrime(int n,int i){
    if(n < 2) return 0;
    if(n == 2 || n == 3) return 1;
    if(n % i == 0) return 0;
    if(i <= n/2) return 1;
    int result = checkPrime(n, i + 1);

    return result;
}
int main(){
    int n = 4;
    if(checkPrime(n,2)==1) cout<<n<<" is a Prime Number";
    else cout<<n<<" is not a Prime number";
    return 0;
}