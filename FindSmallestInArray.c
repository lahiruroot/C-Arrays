#include <stdio.h>
 
// C function to find maximum in arr[] of size n
int smallest(int arr[], int n)
{
    int i;
    
    // Initialize maximum element
    int min = arr[0];
 
    // Traverse array elements from second and
    // compare every element with current max 
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
 
    return min;
}
 
int main()
{
    int arr[] = {10, 324, 45, 1, 9808};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Smallest in given array is %d", smallest(arr, n));
    return 0;
}
