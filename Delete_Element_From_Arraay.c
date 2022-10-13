#include <stdio.h>
int main(void){
    int num[100],n,i,pos;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter the position of array to delete it: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        num[i]=num[i+1];
    }
    printf("Resultant Array after Deletion: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",num[i]);
    }
}