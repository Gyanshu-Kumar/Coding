// #include<iostream>
// using namespace std;

// int main(){
//     int array[] = {1,2,3,4};

//     // cout<<sizeof(array)<<endl;
//     // cout<<sizeof(array)/sizeof(array[0])<<endl;

    // int size = sizeof(array)/sizeof(array[0]);

    // for(int idx = 0;idx<size;idx++){
//         int idx;
//         cout<<sizeof(array)[idx]<<endl;
// //     // }

//     // //for each loop
//     // for(int ele:array){
//     //     cout<<ele<<endl;
//     // }


// //While loop
//     // int index= 0;
//     // while (index<size)
//     // {
//     //     cout<<array[index]<<endl;
//     //     index++;
//     // }
    // char vowels[5];

    // for(char &element:vowels){
    //     cin>>element;
    // }

    // for(int idx=0;idx<5;idx++){
    //     cout<<vowels[idx]<<" ";
    // }

//         return 0;
// }


//Q1.. Find the sum of all elements in the array...........
// #include<iostream>
// using namespace std;

// int main(){
//     int array[] = {3,4,5,6,7};
//     int size = sizeof(array)/sizeof(array[0]);
//     int sum = 0;
//     for(int i = 0;i<size;i++){
//         sum+=array[i];

//     }
        
    
//     cout<<sum<<endl;

//     return 0;

// }

//Q2...Find the Maximum out of all elements in the array........
// #include<iostream>
// using namespace std;
// int main(){
//     int array[] = {4, 6, 17, 99, 999, 1000};
//     int size = sizeof(array)/sizeof(array[0]);
//     int max = array[0];
//     for (int i = 1;i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//         }

//     }
//     cout<<max<<endl;
//     cout<<size<<endl;

//     return 0;
    
// }


// LINEAR SEARCH
// ...Search if a given element is present in the array.if it is not present then return=1 else return index......
#include <iostream>
using namespace std;

int main() {
    int array[] = {3, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 4;

    int ans = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            ans = i;
            break;  
        }
    }

    cout << ans << endl;  
    return 0;
}




    

    
    

