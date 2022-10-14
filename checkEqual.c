//C program to compare whether two 2d arrays are equal or not

#include <stdio.h>
int main()
{
    //define
int i,j,r,c,equalcount;
    printf("Enter number of rows in the matrix = ");
    scanf("%d",&i);
    printf("Enter number of columns in the matrix = ");
    scanf("%d",&j);
int arr1[i][j],arr2[i][j], sum[i][j];

    //input1
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            printf("Enter value for matrix 1 = ");
            scanf("%d",&arr1[i][j]);
        }
    }

    //input2
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            printf("Enter value for matrix 2 = ");
            scanf("%d",&arr2[i][j]);
        }
    }

    //compare
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            if (arr1[i][j]==arr2[i][j])
                equalcount++;

        }
    }
    if (equalcount==i*j)
        printf("Two matrices are equal");
    else
        printf("Two matrices are not equal");

}

