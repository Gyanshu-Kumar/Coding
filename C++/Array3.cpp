//ROTETE AN ARRAY WHRE A BY K STEPS WHERE K IS NON NEGATIVE........
#include<iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5};
    int n = 5;
    int k = 2;
    
    k = k%n;
    
    int ansarray[5];
    int j = 0;
    // inserting last k elements in ans array
    for(int i = n-k;i<n;i++){
        ansarray[j++]=array[i];

    }
    //1 2 3
    // 4 5
    //inserting first n-k elements in array
    for(int i = 0;i<=k;i++){
        ansarray[j++]= array[i];


    }

    for(int i =0;i < n;i++){
        cout<<ansarray[i]<<" ";
    }
    cout<<endl;

    return 0;

}