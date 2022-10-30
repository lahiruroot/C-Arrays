#include<stdio.h>
int main() {
    int i, n, add, arr[100];
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    printf("Enter the elements of array: \n");
    for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
      
    printf("Enter the element to be added: \n");
    scanf("%d", &add);
    arr[n] = add;

    for(int i = 0; i < n + 1; i++) {
       printf("%d ", arr[i]);
    }

    return 0;
}
