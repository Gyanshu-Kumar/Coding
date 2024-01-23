// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//      int n;
//     cin>>n;
//     int vector[n];
//     for(int i = 0;i <n;i++){
//         cin>>vector[i];
//     }
//     int v;
//     int 
//     sort(v.begin(), v.end());
  
    
//     for (auto &x : v){
        
    
//         cout << x << " ";
//     }
   
//     return 0;
// }
// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//     vector<int> v;
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;
    
//     v.push_back(2);
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

    

//     v.resize(5);
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.resize(10);
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.pop_back();
//     v.pop_back();
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;


//     return 0;
// }


// LOOPING IN VECTOR

// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int>v;
// // FOR LOOP....
//     for (int i = 0;i<5;i++){
//         int element;
//         cin>>element;
//         v.push_back(element);
//     }

//     for(int i =0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     v.insert(v.begin()+2,6);
// // FOR EACH LOOP....
//     for(int ele:v){
//         cout<<ele<<" ";
//     }
//     cout<<endl;

//     v.erase(v.end()-2);

// // WHILE LOOP....
//     int idx=0;
//     while(idx<v.size()){
//         cout<<v[idx++]<<" ";
//     }

//     return 0;

// }

// FIND THE LAST OCCURENCE OF ELEMENT X IN THE GIVEN ARRAY..

// #include<iostream>
// #include<math.h>
// #include<vector>

// using namespace std;
// int main(){
//     vector<int>v(6);
    
//     for(int i = 0;i < 6;i++){
//         cin>>v[i];
//     }
//     cout<<"Enter x:";
//     int x;
//     cin>>x;
//     int occurence = -1;
//     for(int i = 0;i < v.size();i++){
//         if(v[i]==x){
//             occurence = i;

//         }

//     }
//     cout<<occurence<<endl;


//   return 0;
    
// }

// COUNT THE NUMBER OF OCCURENCES OF A PARTICULAR ELEMENT X......
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(6);
//     for(int i = 0;i < 6;i++){
//         cin>>v[i];
//     }
//     cout<<"Enter x :";
//     int x;
//     cin>>x;
//     int occurence = 0;
//     for(int ele:v){
//         if(ele==x){
//             occurence++;
//         }
//     }
//     cout<<occurence<<endl;

//     return 0;
// }

// count the number of occurence should be greater thean x.....
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(6);
//     for(int i = 0;i < 6;i++){
//         cin>>v[i];
//     }
//     cout<<"Enter x :";
//     int x;
//     cin>>x;
//     int occurence = 0;
//     for(int ele:v){
//         if(ele<=x){
//             occurence++;

//         }
//     }
//     cout<<occurence<<endl;

//     return 0;
// }


// CHECK IF GIVEN ARRAY IS SORTED OR NOT...
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int array[] = {1,2,3,9,5,6};
//     bool sortedflag=true;
    
//     for(int i = 1;i < 6;i++){
//         if(array[i] <= array[i - 1]){

            
//             sortedflag= false;
            
//         }
        
//     }
//     cout<<sortedflag<<endl;
//     return 0;

    

    
// }

//find the differences between sum of elements at an even indices ti the sum at odd indices....
// #include<iostream>
// using namespace std;
// int main(){
//     int array[] = {1,2,1,2,1,2};
//     int anssum=0;
//     for(int i = 0;i < 6;i++){
//         if(i%2==0){
//             anssum+=array[i];
//         }
//         else{
//             anssum-=array[i];
//         }

//     }
//     cout<<anssum<<endl;

//     return 0;
// }


// FIND THE TOTAL NUMBER OF PAIRS WHOSE SUM IS EQUAL TO GIVEN VALUE X..........
 #include<iostream>
 using namespace std;
 int main(){
    int array[] = {3,4,6,7,1};
    int targetsum=3;
    int size = 5;
    int pairs = 0;
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(array[i]+array[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;

    return 0;
 }

// FIND THE NUMBER OF TRIPLETS WHOSE SUM IS EQUAL TO THE GIVEN VALUE X....

// #include<iostream>
// using namespace std;
// int main(){
//     int array[] = {3,1,2,4,0,6};
//     int targetsum = 6;
//     int size = 6;
//     int pairs = 0;
//     for(int i = 0;i < size;i++)
//     {
//         for(int j = i+1;j <size;j++)
//         {
//             for(int k = j + 1;k < size;k++)
//             {
//                 if(array[i]+array[j]+array[k]==targetsum)
//                 {
//                     pairs++;
//                 }
//             }
//         }
//     }
//     cout<<pairs<<endl;
//     return 0;
// }

// FIND THE UNIQUE NUMBER IN THE GIVEN ARRAY WHERE ALL THE ELEMENTS ARE BEING REPEATED WITH ONE VALUE BEING UNIQUE........
// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     int array[] = {3,1,3,4,2,1,2};
//     int size=7;
//     for(int i = 0;i <size;i++){
//         for(int j = i+1;j < size;j++){
//             if(array[i]==array[j]){
//                 array[i]=array[j]=-1;

//             }
//         }
//     }
//     for(int i = 0;i<size;i++){
//         if(array[i]>0){
//             cout<<array[i]<<endl;
//         }
//     }
//     return 0;
// }