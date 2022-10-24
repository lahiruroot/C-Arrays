#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num_of_elements,tempMin,tempInd;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d",&num_of_elements);
	
	int arr[num_of_elements],arr2[num_of_elements];	//creating the arrays, and assigning user inputed value as array length
	bool arrFound[50] = {0};
	
	/* Getting user inputs for the array */
	for(int i=0; i<num_of_elements; i++)
	{
		printf("Enter the element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	/* To output array as a sequence */
	for(int j=0; j<num_of_elements; j++)
	{
		printf("\t%d",arr[j]);
	}
	
	printf("\n");
	
	/* check and assign minimum values one by one */
	
	for(int k=0; k<num_of_elements; k++)
	{
		tempMin= 100;
		for(int m=0; m<num_of_elements; m++)
		{
			if(arrFound[m] == true)
			{
				continue;
			}
			if(arr[m]<tempMin)
			{
				tempMin = arr[m];
				tempInd = m;
			}
		}
		arr2[k] = tempMin;
		arrFound[tempInd] = true;
	}
	
	for(int n=0; n<num_of_elements; n++)
	{
		printf("\t%d",arr2[n]);
	}
	
	printf("\n");
	return 0;
}