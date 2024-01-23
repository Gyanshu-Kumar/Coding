// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int line = 1;line <= n;line ++){
//         int no_of_spaces = (n-line);
//         for(int k = 0;k < no_of_spaces;k++){
//             cout<<" ";

//         }
//         int no_of_chars = 2*line-1;
//         for (int j = 0; j < no_of_chars; j++)
//         {
            
//             cout<<(char)('A' + j)<<endl;
//         }
//         cout<<endl;
//     }

//     for(int line = n +1;line <= 2*n-1;line++){
//         int no_of_spaces = (line - n);
//         for(int k = 0;k < no_of_spaces;k++){
//             cout<<" ";
//         }
//         int no_of_chars = 2*(2*n-line)-1;
//         for(int j = 0;j<no_of_chars;j++){
//             cout<<(char)('A'+j);
//         }
        
        
//         cout<<endl;
       
//     }
//     return 0;
// }
    
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int line = 0; line < n; line++) {
//         for (int i = 0; i < n; i++) {
//             if (i == n / 2) {
//                 char ch = (char)('A' + i);
//                 cout << ch;
//             }
//             else if (line == n / 2) {
//                 char ch = (char)('A' + i);
//                 cout << ch;
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;

// }

#include <iostream>
using namespace std;

void decrease(int n1, int n2){
    n1--;
    n2 = n2 - 2;
    cout<<(n1) << ":" << (n2);
}
int main(){
    int p = 26;
    int q = 13;
    decrease(p, q);
    cout<<(p)<<endl <<":"<<(q)<<endl;

    return 0;
}

