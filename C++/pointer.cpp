#include<iostream>
using namespace std;
int main(){
    int x = 10;
    float y = 7.5;

    int *ptr = &x;
    float *ptrf = &y;

    cout<<ptr<<endl;
    cout<<ptrf<<endl;

    return 0;
}