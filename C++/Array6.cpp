#include<iostream>
using namespace std;
int main(){
    int array[] = {1,1,2,4,2,6,6};
    
    int size = 7;
    
    for(int i = 0;i < size;i++){
        for(int j = i + 1;j < size;j++){
            
                if(array[i]==array[j]){
                    array[i]=array[j]=-1;
                    
                
                }
            }
        }
        int newarray = 0;
        for(int i = 0;i <size;i++){
            if(array[i]>0){
                
            }
        }
    
   

    return 0;
}