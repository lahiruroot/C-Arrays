#include <stdio.h>
int main() {
    int a[30], i, j, n, temp;
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter array elements");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i] == a[i+1])
        {
            printf("%d ", a[i]);
        }
    }
}
