#include<stdio.h>

    int binary(int arr[], int n, int tar)
    {
    int low = 0;
    int high = n-1;
    while(low < high)
    {
        int mid = (low + high)/ 2;
        if(arr[mid] == tar)
        {
            return mid;
        }
        if(tar < arr[mid])
        {
            high = mid - 1;

        }
        else if(tar > arr[mid])
        {
            low = mid + 1;
        }
    }
    return low +1;
}
int main()
{
    int arr[8] = {0, 5, 10, 15, 20, 25, 20, 35};
    int n = 8;

    int g = binary(arr, n, 7);
    printf("%d",g);
}




































