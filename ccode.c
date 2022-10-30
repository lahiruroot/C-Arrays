#include <stdio.h>


int main()
{
    int matrix[4][3];
    int row, col, sum=0;
    float avg;

    printf("Enter elements in matrix of size %dx%d \n", 4, 3);

    for(row=0; row<4; row++)
    {

        for(col=0; col<3; col++)
        {
            scanf("%d", &matrix[row][col]);

        }

    }

    printf("\nElements in matrix are: \n");
    for(row=0; row<4; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    	for(row=0;row< 4;row++)
	{
		for(col=0;col< 3;col++)
		{
			sum		+=	matrix[row][col];


		}


	}
	avg=sum/12;
    printf("Sum of the elements : %d \n",sum);
    printf("Average of the elements : %.2f",avg);
    return 0;
}
