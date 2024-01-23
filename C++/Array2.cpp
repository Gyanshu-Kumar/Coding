
// #include <iostream>
// using namespace std;

// int largestElementIndex(int array[], int size) {
  
//   int max = INT16_MIN;
//   int maxIndex = -1;
//   for (int i = 0; i < size; i++) {
//     if (array[i] > max) {
//       max = array[i];
//       maxIndex = i;
//     }
//   }
//   return maxIndex;
// }

// int main() {
//   int array[] = {1, 2, 3, 4, 5, 6};
//   int indexOfLargest = largestElementIndex(array, 6);

 
//   array[indexOfLargest] = -1;

  
//   int indexOfSecondLargest = largestElementIndex(array, 6);

  
//   cout << array[indexOfSecondLargest] << endl;

//   return 0;
// }

// FIND THE SECOND LARGEST ELEMENT IN THE ARRAY............
#include<iostream>
using namespace std;

  int secondLargestElement(int array[], int size){
    int max = INT32_MIN;
    int second_max= INT32_MIN;

    for(int i = 0;i <size;i++){
      if(array[i]>max){
        max=array[i];
      }
    }
    for(int i = 0;i <size;i++){
      if(array[i]>second_max && array[i]!=max){
        second_max=array[i];
      }
    }
    return second_max;
  }
int main(){
  int array[] = {2,3,5,7,6,1,7};
  int n = 7;

  cout<<secondLargestElement(array, n)<<endl;

  return 0;

}