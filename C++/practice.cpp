#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n =5;
    for(int line = 1; line <n;line++){
        int Space=(n - line);
        for(int k = 0;k < Space;k++){
            cout<<" ";
        }
        int no_of_char= 2*line-1;
        for(int j = 0; j < no_of_char;j++){
            cout<<(char)('A' + j);
        }cout<<endl;
    }
    for(int line = n+ 1;line <= 2*n;line++){
        int no_of_spaces = (line - n);
        for(int k = 0; k < no_of_spaces;k++){
            cout<<" ";
        }
        int no_of_chars = 2*(2*n-line)-1;
        for(int j = 0;j < no_of_chars;j++){
            cout<<(char)('A'+ j);
        }
        cout<<endl;
    }
    // int n = 5;
    // for(int line = 1; line <= n; line ++){
    //     int space = n - line;
    //     for(int k = 0; k < space;k++){
    //         cout<<" ";
    //     }
    //     int no_of_chars = 2*line - 1;
    //     for(int j = 0;j < no_of_chars;j++){
    //         cout<<"*";

    //     }
    //     cout<<endl;
    // }
    // for(int line = n + 1;line <= 2*n;line ++){
    //     int no_of_spaces = line - n;
    //     for(int k = 0;k < no_of_spaces;k++){
    //         cout<<" ";
    //     }
    //     int no_of_chars = 2*(2*n-line)-1;
    //     for(int j =0;j < no_of_chars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//     int n = 5;
//     for(int line = 0;line < n; line++){
//         for(int i = 0;i < n; i++){
//             if(line == n/2){
//                 cout<<"A";
//             }
//             else if(i == n/2){
//                 cout<<"A";
                
//             }
//             else{
//                 cout<<"A";
//             }
//         }cout<<endl;
//     }
}