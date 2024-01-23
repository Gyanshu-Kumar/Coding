// #include<iostream>
// using namespace std;

// int main(){
//     int x, y;
//     cin >> x >> y;
//     int *ptrx = &x;
//     int *ptry = &y;

//     int result = *ptrx * *ptry; // Calculate the result directly
//     cout << result << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     cout<<&x<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

//     int LargestAndSmallest(int num1, int num2,int num3, int *largest){
//         *largest = max(num1, max(num2, num3));
//         return min(num1, min(num2, num3));
//     }
//     int main(){
//         int num1, num2, num3;
//         cin>>num1>>num2>>num3;
//         int largest;
//         int smallest = LargestAndSmallest(num1, num2, num3, &largest);
//         cout<<largest<<' '<<smallest;
//         return 0;
//     }
// #include<iostream>
// using namespace std;
// void swap(int *num1, int *num2){
//     int temp = *num1;
//     *num1 = * num2;
//     temp = * num2;
// }
// int main(){
// int num1, num2;
// cin>>num1>>num2;
// swap(num1, num2);
// cout<<num1<<' '<<num2;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int fun(string s, char *first, char *last){
//     *first = s[0];
//     *last = s[s.size() - 1];
//     int cnt = 0;
//     for(auto &ch : s)
//     if(ch == 't')
//     cnt++;
//     return cnt;
// }
// int main(){
//     string s;
//     cin>>s;
//     char first,last;
//     int count = fun(s,&first,&last);
//     cout<<first<<" "<<last<<" "<<count;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void swap(int *x,int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     int x = 10;
//     int y = 20;

//     int *ptr1 = &x;
//     int *ptr2 = &y;
//     swap(ptr1, ptr2);

//     cout<<x<<" "<<y;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
   int arr[3] = {15,12,6};
   int n = sizeof(arr)/sizeof(arr[0]);
   int *ptr = &arr[0];
   cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
   cout<<*(arr + 0)<<" "<<*(arr + 1)<<endl;
   for(int i = 0;i < n;i++){
    cout<<arr[i]<<endl;
   }
  
   
    return 0;
}