#include<stdio.h>
void heapify(int arr[], int n, int par_ind){
     //Heapify: a process of creating a heap from an array.

    int large_ind = par_ind;
    int lc_ind = 2*par_ind + 1;
    int rc_ind = 2*par_ind + 2;

    if (lc_ind <n && arr[large_ind] < arr[lc_ind]){
        large_ind = lc_ind;
    }
    if(rc_ind < n && arr[large_ind] < arr[lc_ind]){
        large_ind = rc_ind;
    }
    if (large_ind != par_ind){
        int temp = arr[par_ind];
        arr[par_ind] = arr[large_ind];
        arr[large_ind] = temp;
        heapify(arr, n, large_ind);
    }

}
void heapsort(int arr[], int n)
{
    int l_ind = n -1;
    for(int i = (l_ind -1)/2; i>=0; i--){
        heapify(arr, n, i);
    }
    for(int i = n -1; i >= 0; i--){
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;
    heapify(arr,i , 0);
    }
}
int main(){
    int arr[8] = {2, 4, 9, 1, 23, 45, 7, 10};
    int n = 8;
    heapsort(arr, n);
    printf("Sorted array: ");
    for(int i = 0;i <n;i++)
    printf  ("%d", arr[i]);

    return 0;

}